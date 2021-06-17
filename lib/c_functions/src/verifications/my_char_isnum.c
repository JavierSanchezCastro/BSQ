/*
** EPITECH PROJECT, 2020
** my_char_isnum
** File description:
** Return true or false
*/

#include <stdbool.h>
#include "c_functions_macros.h"

bool my_char_isnum(char c)
{
    if (!(c >= MIN_NUMBER && c <= MAX_NUMBER))
        return (false);
    return (true);
}