/*
** EPITECH PROJECT, 2020
** my_is_prime
** File description:
** Return true or false
*/

#include "c_functions.h"

bool my_is_prime(int nb)
{
    int i = 1;
    int contador = 0;

    if (nb <= 0 || nb == 1)
        return (false);
    while (i <= nb) {
        if (nb % i == 0)
            contador++;
        if (contador > 2)
            return (false);
        i++;
    }
    if (contador == 2)
        return (true);
    return (false);
}