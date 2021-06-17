/*
** EPITECH PROJECT, 2021
** print_list.c
** File description:
** print_list.c
*/

#include <stddef.h>
#include "c_functions.h"
#include "c_functions_structures.h"

void print_list(t_list *list)
{
    t_node *head = NULL;

    if (list != NULL) {
        head = list->head;
        while (list->head != NULL) {
            my_putstr("val: ");
            my_put_nbr(list->head->info->val);
            my_putchar('\n');
            list->head = list->head->next;
        }
        list->head = head;
    }
}