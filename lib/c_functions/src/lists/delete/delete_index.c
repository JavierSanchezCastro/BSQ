/*
** EPITECH PROJECT, 2021
** delete_index.c
** File description:
** delete_index.c
*/

#include <stddef.h>
#include "c_functions.h"

t_node *move_pointer(t_node *current, int index)
{
    int i = 0;

    while (i < index - 1) {
        if (current->next == NULL)
            return (NULL);
        current = current->next;
        i++;
    }
    return (current);
}

t_list *delete_index(t_list *list, int index)
{
    t_node *current = NULL;
    t_node *tmp_node = NULL;

    if (list == NULL || index >= list->size || index < 0)
        return (NULL);
    if (index == 0)
        return (delete_start(list));
    if (index == list->size - 1)
        return (delete_end(list));
    current = list->head;
    current = move_pointer(current, index);
    tmp_node = current->next;
    current->next = current->next->next;
    current->next->prev = current;
    free_node(tmp_node);
    list->size -= 1;
    return (list);
}