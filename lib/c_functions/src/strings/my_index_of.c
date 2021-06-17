/*
** EPITECH PROJECT, 2021
** my_index_of.c
** File description:
** my_index_of.c
*/

int my_index_of(char *str, char c)
{
    int i = 0;

    while (str[i]) {
        if (str[i] == c)
            return (i);
        i++;
    }
    return (-1);
}