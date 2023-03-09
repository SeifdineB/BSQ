/*
** EPITECH PROJECT, 2022
** bsq
** File description:
** bsq
*/

#include "bsq.h"

int *switch_array_in_int1(int *map, char *buffer)
{
    int i = 0;
    int m = 0;

    while (buffer[i] != '\n') {
        i++;
    }
    i++;
    while (buffer[i] != '\0') {
        map[m] = buffer[i];
        i++;
        m++;
    }

    map[m] = -1;

    return map;
}

int *switch_array_in_int2(int *map)
{
    int i = 0;
    while (map[i] != -1) {
        if (map[i] == '\n') {
            map[i] = -2;
        }
        i++;
    }

    return map;
}

int *switch_tab_to_int(int *map, char *buffer)
{
    switch_array_in_int1(map, buffer);
    switch_array_in_int2(map);

    return map;
}

void final_map(all_t *all)
{
    put_in_buffer(all);
    replace_in_buffer(all);
}
