/*
** EPITECH PROJECT, 2020
** my_strdup
** File description:
** Return copy String Malloqued
*/

#include <stdlib.h>
#include "c_functions.h"

char *my_strdup(char const *src)
{
    char *copy = my_malloc_string(my_strlen(src) + 1);

    if (copy == NULL)
        return (NULL);
    my_strcpy(copy, src);
    return (copy);
}