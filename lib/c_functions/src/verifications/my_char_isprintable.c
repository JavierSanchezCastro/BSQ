/*
** EPITECH PROJECT, 2020
** my_char_isprintable
** File description:
** Return 1 or 0 if char is printable
*/

#include <stdbool.h>
#include "c_functions_macros.h"

bool my_char_isprintable(char c)
{
    if (!(c <= MAX_PRINTABLE && c >= MIN_PRINTABLE))
        return (false);
    return (true);
}