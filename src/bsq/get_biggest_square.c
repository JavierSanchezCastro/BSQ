/*
** EPITECH PROJECT, 2021
** BSQ
** File description:
** Function to get coordinates of BSQ
*/

#include <stdbool.h>
#include "c_functions.h"
#include "bsq.h"
#include "bsq_structures.h"

bool is_first_col_row(int i, int j)
{
    if (i == 0 || j == 0)
        return (true);
    return (false);
}

int get_minor(int **map, int i, int j)
{
    int top = map[i - 1][j];
    int top_left = map[i - 1][j - 1];
    int left = map[i][j - 1];
    int smallest = top_left;

    if (top < smallest)
        smallest = top;
    if (left < smallest)
        smallest = left;
    return (smallest);
}

void evaluate_position(int **map, int i, int j, t_biggest_sqr *sqr)
{
    int small = 0;

    if (!is_first_col_row(i, j) && map[i][j] != 0) {
        small = get_minor(map, i, j);
        map[i][j] = map[i][j] + small;
    }
    if (map[i][j] > sqr->size) {
        sqr->size = map[i][j];
        sqr->x = j;
        sqr->y = i;
    }
}

t_biggest_sqr get_biggest_square(int **map, int num_lines, int num_columns)
{
    int i = 0;
    int j = 0;
    t_biggest_sqr square = init_sqr_struct();

    while (i < num_lines)  {
        while (j < num_columns) {
            evaluate_position(map, i, j, &square);
            j++;
        }
        i++;
        j = 0;
    }
    return (square);
}