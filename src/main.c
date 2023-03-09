/*
** EPITECH PROJECT, 2022
** bsq
** File description:
** bsq
*/

#include "bsq.h"

int *get_file_info(char *filename, int *size)
{
    struct stat file_stat;

    if (stat(filename, &file_stat) == -1) {
        return (84);
    }

    *size = file_stat.st_size;
    int *map = malloc(sizeof(int) * *size);

    if (!map) {
        return (84);
    }

    return map;
}

void process_file(int *map, char *buffer)
{
    print_square(map, buffer);
    free(buffer);
    free(map);
}

int main(int argc, char **argv)
{
    int *map;
    int size;

    if (argc != 2 || !argv) {
        return (84);
    }
    map = get_file_info(argv[1], &size);

    char *buffer = get_file(argv[1], size);
    if (!buffer) {
        return 84;
    }
    process_file(map, buffer);
    return 0;
}
