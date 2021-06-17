/*
** EPITECH PROJECT, 2020
** my_swap
** File description:
** Swap two integers with pointers
*/

void my_swap(int *a, int *b)
{
    int auxvar = *a;

    *a = *b;
    *b = auxvar;
}