/*
** EPITECH PROJECT, 2020
** my_strstr
** File description:
** Grep a coincidence in String
*/

#include <stddef.h>
#include "c_functions.h"

char *my_strstr(char *str, char const *to_find)
{
    int token = 0;
    int counter = 0;

    while (str[counter]) {
        if (str[counter] == to_find[token])
            token++;
        else
            token = 0;
        if (to_find[token] == '\0' && token >= 1)
            return (&str[counter - token + 1]);
        counter++;
    }
    return (to_find[0] == '\0' ? str : NULL);
}