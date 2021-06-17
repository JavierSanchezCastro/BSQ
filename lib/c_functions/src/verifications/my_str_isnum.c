/*
** EPITECH PROJECT, 2020
** my_str_isnum
** File description:
** Return 1 or 0 if String is num
*/

#include "c_functions.h"

bool my_str_isnum(char const *str)
{
    int i = 0;

    while (str[i]) {
        if (!(my_char_isnum(str[i])))
            return (false);
        i++;
    }
    return (true);
}