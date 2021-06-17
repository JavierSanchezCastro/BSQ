/*
** EPITECH PROJECT, 2021
** delete_end.c
** File description:
** delete_end.c
*/

#include <stddef.h>
#include "c_functions.h"

t_list *delete_end(t_list *list)
{
    t_node *current = NULL;

    if (list == NULL || list->size == 0)
        return (NULL);
    if (list->head == NULL)
        return (NULL);
    if (list->head->next == NULL) {
        free_list(list);
        return (NULL);
    }
    current = list->head;
    while (current->next->next != NULL) {
        current = current->next;
    }
    list->last = current;
    free_node(current->next);
    current->next = NULL;
    list->size -= 1;
    return (list);
}