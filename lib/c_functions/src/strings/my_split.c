/*
** EPITECH PROJECT, 2021
** my_split.c
** File description:
** my_split.c
*/

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "c_functions.h"

bool is_char_del(char c, char *del)
{
    int i = 0;

    while (del[i]) {
        if (del[i] == c)
            return (true);
        i++;
    }
    return (false);
}

int buscar_del(char *str, char *del, int start)
{
    int i = start;

    while (str[i]) {
        if (is_char_del(str[i], del))
            return (i);
        i++;
    }
    return (-1);
}

void last_split(char *str, int last_end, char **arr, int i)
{
    if (my_strlen(str) - (last_end + 1) > 0)
        arr[i] = my_cut(str, last_end + 1, my_strlen(str));
    else
        arr[i] = NULL;
}

char **my_split(char *str, char *del)
{
    int start = 0;
    int end = buscar_del(str, del, start);
    int last_end = 0;
    char **arr = my_malloc_array_string(2);
    int i = 0;

    if (end == -1)
        last_end = -1;
    while (end != -1) {
        end = buscar_del(str, del, start);
        if (end - start > 0) {
            arr[i++] = my_cut(str, start, end - 1);
            arr = my_resize_string_array(arr);
        }
        start = end + 1;
        if (end != -1)
            last_end = end;
    }
    last_split(str, last_end, arr, i);
    return (arr);
}