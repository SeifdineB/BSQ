/*
** EPITECH PROJECT, 2022
** bsq
** File description:
** bsq
*/

#include "bsq.h"

void put_in_buffer(all_t *bsq)
{
    int i = 0;
    int m = 0;
    while (bsq->map[i] != -1) {
        bsq->buf[m] = bsq->map[i];
        i++;
        m++;
    }
    bsq->buf[m] = '\0';
}

void replace_in_buffer(all_t *bsq)
{
    int i = 0;
    while (bsq->buf[i] != '\0') {
        if (bsq->buf[i] == -2) {
            bsq->buf[i] = '\n';
        }
        i++;
    }
}

all_t *switch_to_numbers(all_t *bsq)
{
    int i = 0;

    while (bsq->map[i] != -1) {
        bsq->map[i] = switch_in_one_and_zero(bsq->map[i]);
        i++;
    }

    return bsq;
}

int switch_in_one_and_zero(int digit)
{
    if (digit == '.') {
        return 1;
    } else if (digit == 'o') {
        return 0;
    } else {
        return digit;
    }
}
