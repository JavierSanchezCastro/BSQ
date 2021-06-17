/*
** EPITECH PROJECT, 2021
** C_FUNCTIONS LIBRARY
** File description:
** C_FUNCTIONS STRUCTURES
*/

#ifndef C_FUNCTIONS_STRUCTURES_
#define C_FUNCTIONS_STRUCTURES_

typedef struct s_info_node {
    int val;
} t_info_node;

typedef struct s_node {
    t_info_node *info;
    struct s_node *prev;
    struct s_node *next;
} t_node;

typedef struct s_list {
    t_node *head;
    t_node *last;
    int size;
} t_list;

#endif /* !C_FUNCTIONS_STRUCTURES_ */