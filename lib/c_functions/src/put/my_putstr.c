/*
** EPITECH PROJECT, 2020
** my_putstr
** File description:
** Print a String
*/

#include <unistd.h>
#include "c_functions.h"

int my_strlen(char const *str);

int my_putstr(char const *str)
{
    if ((int)write(1, str, (size_t)my_strlen(str)) == -1)
        return (84);
    return (0);
}