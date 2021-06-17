/*
** EPITECH PROJECT, 2020
** my_put_arr_str
** File description:
** Print an Array String
*/

#include "c_functions.h"

int my_put_arr_str(char **arr_str)
{
    int i = 0;

    while (arr_str[i] != NULL) {
        my_putstr(arr_str[i++]);
    }
    return (0);
}