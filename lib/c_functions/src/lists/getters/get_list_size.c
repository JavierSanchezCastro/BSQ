/*
** EPITECH PROJECT, 2021
** get_list_size.c
** File description:
** get_list_size.c
*/

#include <stddef.h>
#include "c_functions_structures.h"

int get_list_size(t_list *list)
{
    if (list == NULL)
        return (-1);
    return (list->size);
}