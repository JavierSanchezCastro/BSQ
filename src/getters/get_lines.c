/*
** EPITECH PROJECT, 2021
** BSQ
** File description:
** Function to get the number of lines
*/

#include <stdlib.h>
#include "c_functions.h"
#include "bsq.h"

int get_lines(char *content_file)
{
    char *result = NULL;
    int get_nbr = my_index_of(content_file, '\n') - 1;
    int number = 0;

    result = my_cut(content_file, 0, get_nbr);
    number = my_atoi(result);
    free(result);
    return (number);
}