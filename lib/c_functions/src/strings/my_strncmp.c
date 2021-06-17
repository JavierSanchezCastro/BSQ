/*
** EPITECH PROJECT, 2020
** my_strncmp
** File description:
** Reproduce strncmp function
*/

#include "c_functions.h"

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;

    while (n > 0) {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        if (s1[i] == '\0')
            return (0);
        i++;
        n--;
    }
    return (0);
}