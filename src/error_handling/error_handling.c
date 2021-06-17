/*
** EPITECH PROJECT, 2021
** BSQ
** File description:
** Error Handling Functions
*/

#include <stdlib.h>
#include "c_functions.h"
#include "bsq.h"
#include "bsq_macros.h"

int error_handling(int argc, char **argv)
{
    char *path = my_strdup(argv[1]);
    char *content_file = NULL;

    if (argc != 2)
        return (ERROR);
    if (!is_file_existing(path))
        return (ERROR);
    content_file = my_read_file(path);
    if (!check_first_line(content_file) ||
        !check_num_lines(content_file) ||
        !check_each_line(content_file) ||
        !check_chars(content_file)) {
        free(path);
        free(content_file);
        return (ERROR);
    }
    free(path);
    free(content_file);
    return (SUCCESSFUL);
}