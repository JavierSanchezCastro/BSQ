/*
** EPITECH PROJECT, 2021
** is_empty_file.c
** File description:
** is_empty_file.c
*/

#include "c_functions.h"

bool is_empty_file(char *path)
{
    if (my_size_bytes(path) == 0)
        return (true);
    return (false);
}