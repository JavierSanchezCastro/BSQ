/*
** EPITECH PROJECT, 2021
** add_start.c
** File description:
** add_start.c
*/

#include <stddef.h>
#include "c_functions.h"

t_list *add_start(t_list *list, t_node *new_node)
{
    if (list == NULL)
        return (NULL);
    if (list->head == NULL) {
        list = add_end(list, new_node);
        return (list);
    }
    new_node->next = list->head;
    list->head = new_node;
    list->size += 1;
    return (list);
}