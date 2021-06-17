/*
** EPITECH PROJECT, 2020
** my_char_isalpha.c
** File description:
** my_char_isalpha.c
*/

#include "c_functions.h"

bool my_char_isalpha(char c)
{
    if (!((c < 91 && c > 64) || (c < 123 && c > 96)))
        return (false);
    return (true);
}