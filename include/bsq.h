/*
** EPITECH PROJECT, 2022
** BSQ
** File description:
** BSQ
*/

#ifndef BSQ_H_
        #define BSQ_H_
        #include <stdio.h>
        #include <stdlib.h>
        #include <unistd.h>
        #include <fcntl.h>
        #include <sys/stat.h>

        typedef struct all_s {
            char *buf;
            int *map;
            int nb_of_lines;
            int nb_of_colums;
        } all_t;
        int check_numbers_good(int value);
        void search_max(all_t *all, int *actual, int *max);
        all_t *search_max_value(all_t *all, int *actual, int *max);
        int algo_square(all_t *all, int i);
        void find_square(all_t *all);
        void finalize_and_print(all_t *all);
        void initialize_all(all_t *all, int *map, char *buffer);
        char *read_map(int fd, int size);
        void find_square_in_map_loop(all_t *all, int i);
        all_t *find_square_in_map(all_t *all);
        int *get_file_info(char *filename, int *size);
        void print_square(int *map, char *buffer);
        char *get_file(const char *file, int size);
        char *get_file_content(char *filename, int size);
        int main(int argc, char **argv);
        int size_of_map(int *map);
        all_t *switch_int_in_char2(all_t *all);
        int switch_in_one_and_zero(int digit);
        void put_in_buffer(all_t *all);
        all_t *switch_int_to_char2(all_t *all);
        void replace_in_buffer(all_t *all);
        void final_map(all_t *all);
        int nb_lines(char *buffer);
        int *switch_tab_to_int(int *map, char *buffer);
        int nb_colonnes(char *buffer);
        void process_file(int *map, char *buffer);
        int *switch_array_in_int1(int *map, char *buffer);
        int *switch_array_in_int2(int *map);
        all_t *switch_to_numbers(all_t *all);
        all_t *switch_int_in_char1(all_t *all, int actual, int max);

#endif /* !BSQ_H_ */
