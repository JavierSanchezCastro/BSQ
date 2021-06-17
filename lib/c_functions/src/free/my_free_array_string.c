/*
** EPITECH PROJECT, 2020
** free_array_string
** File description:
** Free Array String
*/

#include <stddef.h>
#include <stdlib.h>
#include "c_functions.h"

void my_free_array_string(char **arr)
{
    int i = 0;

    while (arr[i] != NULL) {
        my_free_string(arr[i]);
        i++;
    }
    free(arr);
}