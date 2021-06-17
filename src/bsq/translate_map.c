/*
** EPITECH PROJECT, 2021
** BSQ
** File description:
** Function to translate map to numbers
*/

#include "c_functions.h"
#include "bsq.h"

int **translate_map(char *content_file)
{
    int pos_first_char = my_index_of(content_file, '\n') + 1;
    int columns = get_columns(content_file);
    int lines = get_lines(content_file);
    int **map = init_int_matrix(lines, columns);
    int i_map = 0;
    int j_map = 0;
    int i = pos_first_char;

    while (content_file[i] != '\0') {
        if (content_file[i] == '.')
            map[i_map][j_map++] = 1;
        if (content_file[i] == 'o')
            map[i_map][j_map++] = 0;
        if (content_file[i] == '\n') {
            i_map++;
            j_map = 0;
        }
        i++;
    }
    return (map);
}