/*
** EPITECH PROJECT, 2020
** my_str_isfloat
** File description:
** Return 1 or 0 if String is float
*/

#include "c_functions.h"
#include <stdbool.h>

bool my_str_isfloat(char const *str)
{
    int i = 0;
    int count_point = 0;

    while (str[i]) {
        if (!(my_char_isnum(str[i])) && (str[i] != 46) && (str[i] != 45))
            return (false);
        else if (str[i] == 46)
            count_point++;
        if (count_point > 1)
            return (false);
        if (str[i] == 45 && i != 0)
            return (false);
        i++;
    }
    return (true);
}