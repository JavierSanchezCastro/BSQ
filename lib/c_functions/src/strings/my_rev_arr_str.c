/*
** EPITECH PROJECT, 2020
** my_rev_arr_str.c
** File description:
** my_rev_arr_str.c
*/

#include "c_functions.h"

char **my_rev_arr_str(char **str_arr)
{
    int i = 0;
    int len = my_str_arr_length(str_arr) - 1;
    char *aux;

    while (i<len) {
        aux = str_arr[len];
        str_arr[len] = str_arr[i];
        str_arr[i] = aux;
        i++;
        len--;
    }
    return (str_arr);
}