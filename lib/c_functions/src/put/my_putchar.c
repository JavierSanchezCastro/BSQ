/*
** EPITECH PROJECT, 2020
** my_putchar
** File description:
** Print char given as parametrer
*/

#include <unistd.h>
#include "c_functions.h"

void my_putchar(char c)
{
    write (1, &c, 1);
}