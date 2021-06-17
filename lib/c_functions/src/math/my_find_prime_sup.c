/*
** EPITECH PROJECT, 2020
** my_find_prime_sup
** File description:
** Return the first prime number
*/

#include "c_functions.h"

int my_find_prime_sup(int nb)
{
    while (my_is_prime(nb) == 0) {
        nb++;
    }
    return (nb);
}