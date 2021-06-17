/*
** EPITECH PROJECT, 2020
** my_str_arr_length
** File description:
** Return length String Array
*/

#include <stddef.h>

int my_str_arr_length(char **str_arr)
{
    int i = 0;

    while (str_arr[i] != NULL) {
        i++;
    }
    return (i);
}