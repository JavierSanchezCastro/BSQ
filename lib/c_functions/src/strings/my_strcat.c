/*
** EPITECH PROJECT, 2020
** my_strcat
** File description:
** Return two Strings concatenated
*/

#include "c_functions.h"

char *my_strcat(char *dest, char const *src)
{
    int i = my_strlen(dest);
    int j = 0;

    while (src[j]) {
        dest = my_resize_string(dest);
        dest[i++] = src[j++];
    }
    return (dest);
}