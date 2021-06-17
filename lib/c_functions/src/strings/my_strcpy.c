/*
** EPITECH PROJECT, 2020
** my_strcpy
** File description:
** Return a String copy
*/

#include "c_functions.h"

char *my_strcpy(char *dest, char const *src)
{
    char *ptr;

    if (dest == NULL)
        return (NULL);
    ptr = dest;
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return (ptr);
}