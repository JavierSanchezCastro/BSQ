/*
** EPITECH PROJECT, 2020
** my_resize_string_array
** File description:
** Resize String Array
*/

#include <stdlib.h>
#include "c_functions.h"

char **my_resize_string_array(char **str_arr)
{
    int size = my_str_arr_length(str_arr);
    char **copy_str_arr = my_malloc_array_string((size + 1 + 1));
    int i = 0;

    while (i < size) {
        copy_str_arr[i] = my_strdup(str_arr[i]);
        if (copy_str_arr[i] == NULL)
            return (NULL);
        i++;
    }
    copy_str_arr[i] = my_strdup("add new space\0");
    if (copy_str_arr[i] == NULL)
        return (NULL);
    copy_str_arr[i+1] = NULL;
    my_free_array_string(str_arr);
    return (copy_str_arr);
}