/*
** EPITECH PROJECT, 2020
** my_str_isupper
** File description:
** Return 1 or 0 if String is upper
*/

#include "c_functions.h"

bool my_str_isupper(char const *str)
{
    int i = 0;

    while (str[i]) {
        if (!(my_char_isupper(str[i])))
            return (false);
        i++;
    }
    return (true);
}