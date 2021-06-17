/*
** EPITECH PROJECT, 2020
** my_int_len
** File description:
** Returns the number of digits it has
*/

int my_int_len(int a)
{
    int i = 1;

    if (a < 0)
        a = a * (-1);
    if (a > 0) {
        i = 0;
        while (a > 0) {
            a = a / 10;
            i++;
        }
    }
    return (i);
}