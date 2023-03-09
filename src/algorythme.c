/*
** EPITECH PROJECT, 2022
** bsq
** File description:
** bsq
*/

#include "bsq.h"

int algo_square(all_t *bsq, int i)
{
    if (bsq->map == NULL || bsq->map[i] == 0) {
        return 0;
    }
    int lower_val = bsq->map[i - 1];
    if (bsq->map[i - bsq->nb_of_lines] < lower_val) {
        lower_val = bsq->map[i - bsq->nb_of_lines];
    }
    if (bsq->map[i - bsq->nb_of_lines - 1] < lower_val) {
        lower_val = bsq->map[i - bsq->nb_of_lines - 1];
    }
    return lower_val + 1;
}

int find_start_of_map(all_t *bsq)
{
    int i = 0;
    while (bsq->map[i] != -2) i++;
    return i + 2;
}

all_t *find_square_in_map(all_t *bsq)
{
    int i = find_start_of_map(bsq);
    find_square_in_map_loop(bsq, i);
    return bsq;
}

void find_square_in_map_loop(all_t *bsq, int i)
{
    while (bsq->map[i] != -1) {
        if (bsq->map[i] == -2) {
            if (bsq->map[i + 1] != -1) {
                i++;
            } else {
                return;
            }
        } else {
            bsq->map[i] = algo_square(bsq, i);
        }
        i++;
    }
}
