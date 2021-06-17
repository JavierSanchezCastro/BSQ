/*
** EPITECH PROJECT, 2021
** free_node.c
** File description:
** free_node.c
*/

#include <stdlib.h>
#include "c_functions_structures.h"

void free_node(t_node *node)
{
    free(node->info);
    free(node);
}