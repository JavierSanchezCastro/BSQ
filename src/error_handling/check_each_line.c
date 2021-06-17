/*
** EPITECH PROJECT, 2021
** BSQ
** File description:
** Check Each Line
*/

#include "c_functions.h"
#include "bsq.h"

bool check_each_line(char *content_file)
{
    int index_first_line = my_index_of(content_file, '\n');
    int start = index_first_line + 1;
    int end = my_nindex_of(content_file, '\n', start);
    int length_line = end - start;

    while (my_nindex_of(content_file, '\n', start) != -1) {
        end = my_nindex_of(content_file, '\n', start);
        if (end - start != length_line)
            return (false);
        start = end + 1;
    }
    return (true);
}