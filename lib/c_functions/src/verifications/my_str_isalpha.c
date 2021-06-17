/*
** EPITECH PROJECT, 2020
** my_str_isalpha
** File description:
** Return 1 or 0 if String is alpha
*/

#include "c_functions.h"

bool my_str_isalpha(char const *str)
{
    int i = 0;

    while (str[i]) {
        if (!(my_char_isalpha(str[i])))
            return (false);
        i++;
    }
    return (true);
}