/*
** EPITECH PROJECT, 2020
** my_strcmp
** File description:
** Reproduce strcmp function
*/

#include "c_functions.h"

int my_strcmp(char const *s1, char const *s2)
{
    int length_s1 = my_strlen(s1);
    int length_s2 = my_strlen(s2);
    int i = 0;

    while (s1[i] && s2[i]) {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    if (length_s1 == length_s2)
        return (0);
    else if (length_s1 > length_s2)
        return (s1[i]);
    else
        return (s2[i] * -1);
}