/*
** EPITECH PROJECT, 2021
** my_nindex_of.c
** File description:
** my_nindex_of.c
*/

int my_nindex_of(char *str, char c, int n)
{
    int i = n;

    while (str[i]) {
        if (str[i] == c)
            return (i);
        i++;
    }
    return (-1);
}