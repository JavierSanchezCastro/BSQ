/*
** EPITECH PROJECT, 2021
** my_count_char.c
** File description:
** my_count_char.c
*/

int my_count_char(char *str, char c)
{
    int i = 0;
    int count = 0;

    while (str[i]) {
        if (str[i] == c)
            count++;
        i++;
    }
    return (count);
}