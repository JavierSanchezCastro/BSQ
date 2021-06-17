/*
** EPITECH PROJECT, 2021
** add_end.c
** File description:
** add_end.c
*/

#include <stddef.h>
#include "c_functions_structures.h"

t_list *add_end(t_list *list, t_node *new_node)
{
    t_node *head = NULL;

    if (list == NULL)
        return (NULL);
    if (list->head == NULL) {
        list->head = new_node;
        list->size += 1;
        return (list);
    }
    head = list->head;
    while (list->head->next != NULL) {
        list->head = list->head->next;
    }
    list->head->next = new_node;
    list->head->next->prev = list->head;
    list->last = list->head->next;
    list->head = head;
    list->size += 1;
    return (list);
}