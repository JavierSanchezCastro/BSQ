/*
** EPITECH PROJECT, 2021
** BSQ
** File description:
** Function to initialize matrix
*/

#include <stdlib.h>

int **init_int_matrix(int lines, int columns)
{
    int i = 0;
    int **matrix = malloc(lines * sizeof(int *));

    if (matrix == NULL)
        return (NULL);
    while (i < lines) {
        matrix[i] = malloc(columns * sizeof(int));
        if (matrix[i] == NULL)
            return (NULL);
        i++;
    }
    return (matrix);
}