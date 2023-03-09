/*
** EPITECH PROJECT, 2022
** bsq
** File description:
** bsq
*/

#include "bsq.h"

void initialize_all(all_t *bsq, int *map, char *buffer)
{
    bsq->buf = buffer;
    bsq->map = switch_tab_to_int(map, buffer);
    bsq->nb_of_lines = nb_lines(buffer);
    bsq->nb_of_colums = nb_colonnes(buffer);
}

void find_square(all_t *bsq)
{
    switch_to_numbers(bsq);
    if (bsq->nb_of_lines > 1 && bsq->nb_of_colums > 1) {
        find_square_in_map(bsq);
    }
}

void finalize_and_print(all_t *bsq)
{
    switch_int_to_char2(bsq);
    final_map(bsq);
    write(1, bsq->buf, size_of_map(bsq->map));
}

void print_square(int *map, char *buffer)
{
    all_t bsq;
    initialize_all(&bsq, map, buffer);
    find_square(&bsq);
    finalize_and_print(&bsq);
}
