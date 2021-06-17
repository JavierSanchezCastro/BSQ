/*
** EPITECH PROJECT, 2020
** my_compute_square_root
** File description:
** Return Square Root
*/

int my_compute_square_root(int nb)
{
    int i = 0;

    if (nb <= 0)
        return (0);
    while (i <= nb) {
        if (i * i == nb)
            return (i);
        if (i * i > nb)
            return (0);
        i++;
    }
    return (0);
}