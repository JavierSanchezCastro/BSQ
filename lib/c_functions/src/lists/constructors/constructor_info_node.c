/*
** EPITECH PROJECT, 2021
** constructor_info_node.c
** File description:
** constructor_info_node.c
*/

#include <stdlib.h>
#include "c_functions_structures.h"

t_info_node *constructor_info_node(int val)
{
    t_info_node *new_info_node = malloc(sizeof(t_info_node));

    if (!new_info_node)
        return (NULL);
    new_info_node->val = val;
    return (new_info_node);
}