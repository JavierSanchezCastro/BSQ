/*
** EPITECH PROJECT, 2020
** my_showstr.c
** File description:
** Print a String with no printable chars
*/

#include "c_functions.h"

void add_zeros_left(char ***str_arr)
{
    int size = my_str_arr_length(*str_arr);

    while (size < 2) {
        (*str_arr) = my_resize_string_array_start(*str_arr);
        (*str_arr)[0] = my_strdup("0");
        size++;
    }
}

int my_showstr(char const *str)
{
    int i = 0;
    char **arr_str_oct;

    while (str[i]) {
        if (my_char_isprintable(str[i]) == 1)
            my_putchar(str[i]);
        else {
            my_putchar('\\');
            arr_str_oct = my_get_nbr_base((my_ctoi(str[i])+48), 16, 1);
            add_zeros_left(&arr_str_oct);
            my_put_arr_str(arr_str_oct);
        }
        i++;
    }
    return (0);
}