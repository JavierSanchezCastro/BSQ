/*
** EPITECH PROJECT, 2020
** my_char_isupper.c
** File description:
** my_char_isupper.c
*/

#include <stdbool.h>
#include "c_functions_macros.h"

bool my_char_isupper(char c)
{
    if (!(c <= MAX_UPPER && c >= MIN_UPPER))
        return (false);
    return (true);
}