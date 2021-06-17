/*
** EPITECH PROJECT, 2020
** free_malloc
** File description:
** free_malloc
*/

#include "c_functions.h"
#include <stdarg.h>

void my_free_malloc(char *str, ...)
{
    va_list ap;
    int i = 0;
    int **matrix_int = NULL;
    float **matrix_float = NULL;
    int lines = 0;

    va_start(ap, str);
    while (i < my_strlen(str)) {
        if (str[i] == 's') {
            my_free_string(va_arg(ap, char *));
        }
        if (str[i] == 'a') {
            my_free_array_string(va_arg(ap, char **));
        }
        if (str[i] == 'i') {
            matrix_int = va_arg(ap, int **);
            lines = va_arg(ap, int);
            my_free_matrix_int(matrix_int, lines);
        }
        if (str[i] == 'f') {
            matrix_float = va_arg(ap, float **);
            int lines = va_arg(ap, int);
            my_free_matrix_float(matrix_float, lines);
        }
        i++;
    }
}