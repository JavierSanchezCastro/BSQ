/*
** EPITECH PROJECT, 2020
** my_free_array_int.c
** File description:
** my_free_array_int.c
*/

#include <stdlib.h>

void my_free_matrix_float(float **arr, int lines)
{
    int i = 0;

    while (i < lines) {
        free(arr[i]);
        i++;
    }
    free(arr);
}