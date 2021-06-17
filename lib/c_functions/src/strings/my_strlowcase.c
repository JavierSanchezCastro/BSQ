/*
** EPITECH PROJECT, 2020
** my_strlowcase
** File description:
** Return String Lowercased
*/

#include "c_functions_macros.h"

char *my_strlowcase(char *str)
{
    int i = 0;

    while (str[i]) {
        if (str[i] >= MIN_UPPER && str[i] <= MAX_UPPER)
            str[i] = (str[i])+32;
        i++;
    }
    return (str);
}