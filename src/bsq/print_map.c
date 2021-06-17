/*
** EPITECH PROJECT, 2021
** BSQ
** File description:
** Print Map
*/

#include <stdbool.h>
#include <stdlib.h>
#include "c_functions.h"
#include "bsq_structures.h"

bool is_line_bsq(int i, t_biggest_sqr sqr)
{
    int size = 0;

    while (size < sqr.size) {
        if (i == sqr.y - size)
            return (true);
        size++;
    }
    return (false);
}

void print_line(char *line, t_biggest_sqr square)
{
    int i = 0;

    while (line[i]) {
        if ((i > (square.x - square.size)) && (i <= square.x))
            my_putchar('x');
        else
            my_putchar(line[i]);
        i++;
    }
}

void print_map(char *cleaned_map, t_biggest_sqr square)
{
    int i = 0;
    int start = 0;
    int end = 0;
    char *line = NULL;

    while (my_nindex_of(cleaned_map, '\n', start) != -1) {
        end = my_nindex_of(cleaned_map, '\n', start);
        line = my_cut(cleaned_map, start, end);
        if (!is_line_bsq(i, square))
            my_putstr(line);
        else
            print_line(line, square);
        free(line);
        start = end + 1;
        i++;
    }
}