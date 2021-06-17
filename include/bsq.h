/*
** EPITECH PROJECT, 2021
** BSQ
** File description:
** BSQ MAIN HEADER
*/

#ifndef BSQ_
#define BSQ_

#include <stdbool.h>
#include "bsq_structures.h"

//MAIN BSQ FUNCTIONS
int helpfile(void);
int print_error(char *);
int bsq(char *path);
int **translate_map(char *);
t_biggest_sqr get_biggest_square(int **, int, int);
void print_map(char *, t_biggest_sqr);

//ERROR HANDLING
int error_handling(int, char **);
bool check_chars(char *);
bool check_each_line(char *);
bool check_first_line(char *);
bool check_num_lines(char *);

//GETETRS
int get_columns(char *);
int get_lines(char *);

//INITS
int **init_int_matrix(int, int);
t_biggest_sqr init_sqr_struct(void);

#endif /* !BSQ_ */