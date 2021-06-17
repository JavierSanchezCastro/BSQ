/*
** EPITECH PROJECT, 2020
** my_str_islower
** File description:
** Return 1 or 0 if String is lower
*/

#include "c_functions.h"

bool my_str_islower(char const *str)
{
    int i = 0;

    while (str[i]) {
        if (!(my_char_islower(str[i])))
            return (false);
        i++;
    }
    return (true);
}