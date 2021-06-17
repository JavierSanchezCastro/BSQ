/*
** EPITECH PROJECT, 2020
** print_arr_int
** File description:
** print_arr_int
*/

#include "c_functions.h"

void print_arr_int(int *arr_int, char *name, int size)
{
    int i = 0;

    while (i < size) {
        printf("%s[%d]: %d\n", name, i, arr_int[i++]);
    }
}