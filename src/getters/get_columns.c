/*
** EPITECH PROJECT, 2021
** BSQ
** File description:
** Function to get the number of columns
*/

#include "bsq.h"
#include "c_functions.h"

int get_columns(char *content_file)
{
    int index_first_line = my_index_of(content_file, '\n');
    int start = index_first_line + 1;
    int end = my_nindex_of(content_file, '\n', start);
    int length_line = end - start;

    return (length_line);
}