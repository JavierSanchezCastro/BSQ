/*
** EPITECH PROJECT, 2020
** my_malloc_array_string
** File description:
** Malloc String Array
*/

#include <stdlib.h>
#include <stddef.h>

char **my_malloc_array_string(int size)
{
    int i = 0;
    char **str = malloc(size * sizeof(char *));

    if (str == NULL)
        return (NULL);
    while (i < size) {
        str[i] = NULL;
        i++;
    }
    return (str);
}