/*
** EPITECH PROJECT, 2020
** my_char_islower.c
** File description:
** my_char_islower.c
*/

#include <stdbool.h>
#include "c_functions_macros.h"

bool my_char_islower(char c)
{
    if (!(c <= MAX_LOWER && c >= MIN_LOWER))
        return (false);
    return (true);
}