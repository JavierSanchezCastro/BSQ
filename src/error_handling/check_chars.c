/*
** EPITECH PROJECT, 2021
** BSQ
** File description:
** Check Handled Chars
*/

#include "c_functions.h"
#include "bsq.h"
#include "bsq_macros.h"

bool is_controlled_char(char c)
{
    int i = 0;

    while (CHARS_MAP[i] != '\0') {
        if (CHARS_MAP[i] == c)
            return (true);
        i++;
    }
    return (false);
}

bool check_chars(char *content_file)
{
    int pos_first_char = my_index_of(content_file, '\n') + 1;
    int i = pos_first_char;

    while (content_file[i] != '\0') {
        if (!is_controlled_char(content_file[i]))
            return (false);
        i++;
    }
    return (true);
}