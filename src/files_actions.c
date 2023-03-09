/*
** EPITECH PROJECT, 2022
** bsq
** File description:
** bsq
*/

#include "bsq.h"

char *read_map(int fd, int size)
{
    char *buffer = malloc(sizeof(char) * (size + 1));
    if (buffer == NULL) {
        return NULL;
    }

    int nb_read = 0;
    while (nb_read < size) {
        int result = read(fd, buffer + nb_read, size - nb_read);
        if (result < 0) {
            free(buffer);
            return NULL;
        }
        nb_read += result;
    }
    buffer[size] = '\0';
    return buffer;
}

char *get_file(const char *file, int size)
{
    int fd = open(file, O_RDONLY);
    if (fd < 0) {
        return NULL;
    }
    char *buffer = read_map(fd, size);
    close(fd);
    return buffer;
}
