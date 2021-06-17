/*
** EPITECH PROJECT, 2020
** my_str_isprintable
** File description:
** Return 1 or 0 if String is printable
*/

#include "c_functions.h"

bool my_str_isprintable(char const *str)
{
    int i = 0;

    while (str[i]) {
        if (!(my_char_isprintable(str[i])))
            return (false);
        i++;
    }
    return (true);
}