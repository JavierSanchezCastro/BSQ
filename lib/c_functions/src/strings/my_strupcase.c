/*
** EPITECH PROJECT, 2020
** my_strupcase
** File description:
** Return String Upcased
*/

#include "c_functions_macros.h"

char *my_strupcase(char *str)
{
    int i = 0;

    while (str[i]) {
        if (str[i] >= MIN_LOWER && str[i] <= MAX_LOWER)
            str[i] = (str[i])-32;
        i++;
    }
    return (str);
}