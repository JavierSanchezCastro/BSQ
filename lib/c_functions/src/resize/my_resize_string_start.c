/*
** EPITECH PROJECT, 2020
** my_resize_string_start
** File description:
** Resize a String, first position
*/

#include <stdlib.h>
#include "c_functions.h"

char *my_resize_string_start(char *str)
{
    int size = my_strlen(str);
    char *copy_str = my_malloc_string((size + 1 + 1));
    int i = 0;

    copy_str[0] = '\0';
    while (i < (size+1)) {
        copy_str[i+1] = str[i];
        i++;
    }
    copy_str[i] = '\0';
    my_free_string(str);
    return (copy_str);
}