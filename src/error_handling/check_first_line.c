/*
** EPITECH PROJECT, 2021
** BSQ
** File description:
** Check First Line
*/

#include "c_functions.h"
#include "bsq.h"

bool check_first_line(char *content_file)
{
    int i = 0;

    while (content_file[i] != '\n') {
        if (!my_char_isnum(content_file[i]))
            return (false);
        i++;
    }
    return (true);
}