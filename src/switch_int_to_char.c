/*
** EPITECH PROJECT, 2022
** b sq
** File description:
** bsq
*/

#include "bsq.h"

all_t *switch_int_in_char1(all_t *bsq, int actual, int max)
{
    int j = 0;
    int i = max;
    while (j != actual) {
        for (int k = 0; k != actual; k++) {
            bsq->map[i - bsq->nb_of_lines * k] = 'x';
        }
        j++;
        i--;
    }
}

all_t *switch_int_in_char2(all_t *bsq)
{
    int i = 0;
    while (bsq->map[i] != -1) {
        if (bsq->map[i] != 0 && bsq->map[i] != 'x' && bsq->map[i] != -2)
            bsq->map[i] = '.';
        if (bsq->map[i] == 0)
            bsq->map[i] = 'o';
        i++;
    }
}

all_t *switch_int_to_char2(all_t *bsq)
{
    int actual = 0;
    int max = 0;
    search_max_value(bsq, &actual, &max);
    switch_int_in_char1(bsq, actual, max);
    switch_int_in_char2(bsq);

    return bsq;
}
