/*
** EPITECH PROJECT, 2021
** my_ctoa.c
** File description:
** my_ctoa.c
*/

#include <stdlib.h>

char *my_ctoa(char c)
{
    char *str = malloc(2 * sizeof(char));

    str[0] = c;
    str[1] = '\0';
    return (str);
}