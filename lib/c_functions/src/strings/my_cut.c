/*
** EPITECH PROJECT, 2020
** cut_str_x_y
** File description:
** Cut String between two numbers
*/

#include <stdlib.h>
#include "c_functions.h"

char *my_cut(char *str, int x, int y)
{
    char *dest = my_malloc_string(((y-x) +1 +1));
    int i = 0;

    if (dest == NULL)
        return (NULL);
    while (x <= y) {
        dest[i] = str[x];
        i++;
        x++;
    }
    dest[i] = '\0';
    return (dest);
}