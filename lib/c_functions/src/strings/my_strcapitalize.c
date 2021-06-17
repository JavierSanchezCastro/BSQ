/*
** EPITECH PROJECT, 2020
** my_strcapitalize
** File description:
** Returns String Capitalized
*/

char *my_strcapitalize(char *str)
{
    int i = 0;
    int bool_space = 1;

    while (str[i]) {
        if (str[i] > 47 && str[i] < 58)
            bool_space = 0;
        if (str[i] > 96 && str[i] < 123 && bool_space == 1) {
            str[i] = str[i] - 32;
            bool_space = 0;
        }
        else if (str[i] > 64 && str[i] < 91 && bool_space == 0)
            str[i] = str[i] + 32;
        if ((str[i] < 48) || (str[i] > 57 && str[i] < 65 ) ||
            (str[i] > 90 && str[i] < 97) || (str[i] > 122 && str[i] < 127))
            bool_space = 1;
        if (str[i] > 64 && str[i] < 91)
            bool_space = 0;
        i++;
    }
    return (str);
}