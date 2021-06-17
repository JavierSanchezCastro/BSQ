/*
** EPITECH PROJECT, 2020
** my_atoi
** File description:
** Converts a String to Integer
*/

int my_atoi(char *str)
{
    int res = 0;
    int mul = 1;
    int i = 0;
    int neg = 0;

    if (str[0] == '-') {
        neg = 1;
    }
    while (str[i]) {
        i++;
    }
    i--;
    while (i >= neg) {
        res = res + ((str[i]-48) * mul);
        mul = mul * 10;
        i--;
    }
    if (neg == 1)
        res = res * (-1);
    return (res);
}