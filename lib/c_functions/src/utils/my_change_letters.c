/*
** EPITECH PROJECT, 2020
** my_change_letters.c
** File description:
** my_change_letters.c
*/

#include "c_functions.h"
#include <stddef.h>

void change_letters(char **str_arr, int lower)
{
    int i = 0;
    int desfase = 0;

    if (lower == 0)
        desfase = 55;
    else
        desfase = 87;
    while (str_arr[i] != NULL) {
        if (my_atoi(str_arr[i]) > 9) {
            str_arr[i][0] = (my_atoi(str_arr[i]) + desfase);
            str_arr[i][1] = '\0';
        }
        i++;
    }
}