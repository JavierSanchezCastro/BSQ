/*
** EPITECH PROJECT, 2020
** my_resize_int_array_good.c
** File description:
** my_resize_int_array_good.c
*/

#include "c_functions.h"
#include <stdlib.h>

int *my_resize_int_array_start(int *array, int size)
{
    int *copy_arr = malloc((size + 1) * sizeof(int));
    int i = 0;

    if (copy_arr == NULL)
        return (NULL);
    copy_arr[i++] = 0;
    while (i < size+1) {
        copy_arr[i] = array[i-1];
        i++;
    }
    free(array);
    return (copy_arr);
}