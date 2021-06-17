/*
** EPITECH PROJECT, 2021
** my_count_lines.c
** File description:
** my_count_lines.c
*/

int my_count_lines(char *str)
{
    int i = 0;
    int count = 0;

    while (str[i]) {
        if (str[i] == '\n')
            count++;
        i++;
    }
    return (count);
}