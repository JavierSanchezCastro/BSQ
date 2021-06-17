/*
** EPITECH PROJECT, 2020
** my_resize_int_array.c
** File description:
** Resize an Integer array
*/

#include "c_functions.h"
#include <stdlib.h>

int *my_resize_int_array(int *array, int size)
{
    int *copy_arr = malloc((size + 1) * sizeof(int));
    int i = 0;

    if (copy_arr == NULL)
        return (NULL);
    while (i < size) {
        copy_arr[i] = array[i];
        i++;
    }
    copy_arr[i] = 0;
    free(array);
    return (copy_arr);
}