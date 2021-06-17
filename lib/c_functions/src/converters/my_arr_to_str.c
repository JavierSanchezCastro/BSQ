/*
** EPITECH PROJECT, 2020
** my_arr_to_str.c
** File description:
** my_arr_to_str.c
*/

#include "c_functions.h"
#include <stddef.h>

char *my_arr_to_str(char **arr_str)
{
    int i = 0;
    int j = 0;
    int k = 0;
    char *str = my_malloc_string(2);

    while (arr_str[i] != NULL) {
        while (arr_str[i][j]) {
            str[k] = arr_str[i][j];
            str = my_resize_string(str);
            k++;
            j++;
        }
        j = 0;
        i++;
    }
    str[k] = '\0';
    return (str);
}