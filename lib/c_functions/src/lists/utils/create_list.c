/*
** EPITECH PROJECT, 2021
** create_list.c
** File description:
** create_list.c
*/

#include <stdlib.h>
#include "c_functions_structures.h"

t_list *create_list()
{
    t_list *list = malloc(sizeof(t_list));

    list->head = NULL;
    list->last = NULL;
    list->size = 0;
    return (list);
}