/*
** EPITECH PROJECT, 2020
** my_resize_string
** File description:
** Resize a String
*/

#include <stdlib.h>
#include "c_functions.h"

char *my_resize_string(char *str)
{
    int size = my_strlen(str);
    char *copy_str = my_malloc_string((size + 1 + 1));
    int i = 0;

    while (i < size) {
        copy_str[i] = str[i];
        i++;
    }
    copy_str[i] = '\0';
    copy_str[i+1] = '\0';
    my_free_string(str);
    return (copy_str);
}