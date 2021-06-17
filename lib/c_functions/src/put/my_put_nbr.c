/*
** EPITECH PROJECT, 2020
** my_put_nbr
** File description:
** Print number given as parameter
*/

#include "c_functions.h"

void print_numbers(int nb)
{
    if (nb >= 10)
        print_numbers(nb / 10);
    if (nb < 10)
        my_putchar(nb + 48);
    else
        my_putchar(nb % 10 + 48);
}

int my_put_nbr(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
    }
    print_numbers(nb);
    return (0);
}