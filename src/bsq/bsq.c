/*
** EPITECH PROJECT, 2021
** BSQ
** File description:
** Main BSQ Function
*/

#include <stdlib.h>
#include "c_functions.h"
#include "bsq.h"
#include "bsq_macros.h"

char *clean_map(char *content_file)
{
    int start = my_index_of(content_file, '\n') + 1;
    int length = my_strlen(content_file);
    char *cleaned_map = malloc(sizeof(char) * (length - start + 1));
    int i = start;

    if (!cleaned_map)
        return (NULL);
    while (content_file[i] != '\0') {
        cleaned_map[i - start] = content_file[i];
        i++;
    }
    cleaned_map[i - start] = '\0';
    return (cleaned_map);
}

int bsq(char *path)
{
    char *content_file = my_read_file(path);
    char *cleaned_map = clean_map(content_file);
    int **map = translate_map(content_file);
    int lines = get_lines(content_file);
    int columns = get_columns(content_file);

    t_biggest_sqr square = get_biggest_square(map, lines, columns);
    print_map(cleaned_map, square);
    my_free_matrix_int(map, lines);
    free(cleaned_map);
    free(content_file);
    return (SUCCESSFUL);
}