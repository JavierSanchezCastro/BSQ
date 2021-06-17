/*
** EPITECH PROJECT, 2020
** print_arr_str
** File description:
** print_arr_str
*/

#include "c_functions.h"

void print_arr_str(char **arr_str, char *name)
{
    int i = 0;

    while (arr_str[i] != NULL) {
        printf("%s[%d]: %s\n", name, i, arr_str[i++]);
    }
}