/*
** EPITECH PROJECT, 2020
** my_strncat
** File description:
** Return two Strings concatenated with nb chars
*/

#include "c_functions.h"

char *my_strncat(char *dest, char const *src, int nb)
{
    int i = my_strlen(dest);
    int j = 0;

    while (src[j] && j < nb) {
        dest = my_resize_string(dest);
        dest[i++] = src[j++];
    }
    return (dest);
}