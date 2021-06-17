/*
** EPITECH PROJECT, 2021
** BSQ
** File description:
** Check Num Lines
*/

#include <stdlib.h>
#include "c_functions.h"

bool check_num_lines(char *content_file)
{
    int first_end_line = 0;
    int num_lines = 0;
    char *number = NULL;
    int count_lines = my_count_char(content_file, '\n') - 1;

    first_end_line = my_index_of(content_file, '\n');
    number = my_cut(content_file, 0, (first_end_line - 1));
    num_lines = my_atoi(number);
    free(number);
    if (count_lines != num_lines)
        return (false);
    return (true);
}