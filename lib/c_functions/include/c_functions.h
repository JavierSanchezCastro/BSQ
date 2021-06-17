/*
** EPITECH PROJECT, 2020
** C_FUNCTIONS LIBRARY
** File description:
** C_FUNCTIONS MAIN HEADER
*/

#ifndef C_FUNCTIONS_
#define C_FUNCTIONS_
#include <stdio.h>
#include <stdbool.h>
#include "c_functions_structures.h"

//EPITECH FUCTIONS
void my_putchar(char);
bool my_isneg(int);
int my_put_nbr(int);
int my_put_nbr_base(int, int, int);
void my_swap(int *, int *);
int my_putstr(char const *);
int my_strlen(char const *);
int my_getnbr(char const *); //NOT YET
void my_sort_int_array(int *, int);
int my_compute_power_rec(int, int);
int my_compute_square_root(int);
bool my_is_prime(int);
int my_find_prime_sup(int);
char *my_strcpy(char *, char const *);
char *my_strncpy(char *, char const *, int);
char *my_revstr(char *);
char *my_strstr(char *, char const *);
int my_strcmp(char const *, char const *);
int my_strncmp(char const *, char const *, int);
char *my_strupcase(char *);
char *my_strlowcase(char *);
char *my_strcapitalize(char *);
bool my_str_isalpha(char const *);
bool my_str_isnum(char const *);
bool my_str_islower(char const *);
bool my_str_isupper(char const *);
bool my_str_isprintable(char const *);
int my_showstr(char const *);
int my_showmem(char const *, int); //NOT YET
char *my_strcat(char *, char const *);
char *my_strncat(char *, char const *, int);

//OWN FUCTIONS
//LENS
int my_arr_int_len(int *);
int my_int_len(int);
int my_str_arr_length(char **);

//ASCII AND INT
int my_atoi(char *);
char *my_itoa(int);
int my_ctoi(char);

//VERIFICATIONS
bool my_char_isnum(char);
bool my_char_isprintable(char);
bool my_str_isfloat(char const *);
bool my_char_islower(char);
bool my_char_isupper(char);
bool my_char_isalpha(char);

//MALLOC
char **my_malloc_array_string(int);
char *my_malloc_string(int);

//RESIZES
char *my_resize_string(char *);
char *my_resize_string_start(char *);
char **my_resize_string_array(char **);
char **my_resize_string_array_start(char **);
int *my_resize_int_array(int *, int);
int *my_resize_int_array_start(int *, int );
int *my_resize_int_array_start_less(int *, int);

//FREES
void my_free_array_string(char **);
void my_free_string(char *);
void my_free_matrix_int(int **, int);
void my_free_matrix_float(float **, int);
void my_free_malloc(char *, ...);

//STRINGS
char *my_cut(char *, int, int);
char *my_strdup(char const *);
char **my_split(char *, char *);
int my_count_lines(char *);
int my_count_char(char *, char);
int my_index_of(char *, char);
int my_nindex_of(char *, char, int);

//REVERSE
char **my_rev_arr_str(char **);

//CONVERSIONS
char *my_arr_to_str(char **);

//GETTERS
char **my_get_nbr_base(int, int, int);

//PRINTERS
int my_put_arr_str(char **);

//SORTER
void my_sort_words(char **, int);

//UTILS
void change_letters(char **, int);

//DEBUG
void print_arr_str(char **, char *);
void print_arr_int(int *, char *, int);

//FILES
char *my_read_file(char *);
int my_size_bytes(char *);
bool is_file_existing(const char *);
bool is_empty_file(char *);

//LISTS
t_list *add_end(t_list *list, t_node *new_node);
t_list *add_start(t_list *list, t_node *new_node);
t_info_node *constructor_info_node(int val);
t_node *constructor_node(t_info_node *info);
t_list *delete_end(t_list *list);
t_list *delete_index(t_list *list, int index);
t_list *delete_start(t_list *list);
void free_list(t_list *list);
void free_node(t_node *node);
int get_list_size(t_list *list);
t_list *create_list();
void print_list(t_list *list);

#endif /* !C_FUNCTIONS_ */