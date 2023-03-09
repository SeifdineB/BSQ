/*
** EPITECH PROJECT, 2022
** bsq
** File description:
** bsq
*/

#include "bsq.h"

int check_numbers_good(int value)
{
    int result = 0;
    if (value > 0 && value != -2) {
        result = 1;
    }
    return result;
}

void search_max(all_t *bsq, int *actual, int *max)
{
    *actual = 0;
    *max = 0;
    int i = 0;
    while (bsq->map[i] != -1) {
        if (check_numbers_good(bsq->map[i]) == 1) {
            *actual = bsq->map[i];
            *max = i;
        }
        i++;
    }
}

all_t *search_max_value(all_t *bsq, int *actual, int *max)
{
    int i = 0;
    while (bsq->map[i] != -1) {
        if (bsq->map[i] > *actual && bsq->map[i] != -2) {
            *actual = bsq->map[i];
            *max = i;
        }
        i++;
    }
}
