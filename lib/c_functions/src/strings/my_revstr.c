/*
** EPITECH PROJECT, 2020
** my_revstr
** File description:
** Return String Reversed
*/

#include "c_functions.h"

char *my_revstr(char *str)
{
    int i = 0;
    int length = my_strlen(str)-1;
    char aux;

    while (i < length) {
        aux = str[length];
        str[length] = str[i];
        str[i] = aux;
        i++;
        length--;
    }
    return (str);
}