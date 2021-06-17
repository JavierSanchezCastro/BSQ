/*
** EPITECH PROJECT, 2021
** my_sort_words.c
** File description:
** my_sort_words.c
*/

#include <stdlib.h>
#include "c_functions.h"

char **compare_array(int j, char **array)
{
    char *aux = NULL;

    if (my_strcmp(array[j], array[j + 1]) > 0) {
        aux = my_strdup(array[j]);
        free(array[j]);
        array[j] = my_strdup(array[j + 1]);
        free(array[j + 1]);
        array[j + 1] = my_strdup(aux);
    }
    free(aux);
    return (array);
}

void my_sort_words(char **array, int size)
{
    int i = 0;
    int j = 0;

    while (i < size) {
        j = 0;
        while (j < size - i - 1) {
            array = compare_array(j, array);
            j++;
        }
        i++;
    }
}