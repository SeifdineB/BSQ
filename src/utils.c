/*
** EPITECH PROJECT, 2022
** bsq
** File description:
** bsq
*/

#include "bsq.h"

int nb_colonnes(char *buffer)
{
    if (buffer == NULL) {
        return 0;
    }
    int x = 0;
    int i = 0;
    while (buffer[i] != '\n') {
        if (buffer[i] < '0' || buffer[i] > '9') {
            return 0;
        }
        x = (x * 10) + (buffer[i] - '0');
        i++;
    }
    return x;
}

int size_of_map(int *map)
{
    if (map == NULL) {
        return 0;
    }
    int size = 0;
    while (map[size] != -1) {
        size++;
    }
    return size;
}

int nb_lines(char *buffer)
{
    if (buffer == NULL) {
        return 0;
    }
    int i = 0;
    while (buffer[i] != '\n') {
        i++;
    }
    i++;
    int y = 0;
    while (buffer[i] != '\n') {
        y++;
        i++;
    }
    return (++y);
}
