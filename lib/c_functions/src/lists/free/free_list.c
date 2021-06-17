/*
** EPITECH PROJECT, 2021
** free_list.c
** File description:
** free_list.c
*/

#include <stdlib.h>
#include "c_functions.h"

void free_list(t_list *list)
{
    t_node *tmp = NULL;
    int i = 0;

    if (list != NULL) {
        while (list->head != NULL) {
            tmp = list->head->next;
            free_node(list->head);
            list->head = tmp;
            i++;
        }
        free(list);
    }
}