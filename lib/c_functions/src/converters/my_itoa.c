/*
** EPITECH PROJECT, 2020
** my_itoa
** File description:
** Converts an Integer to String
*/

#include "c_functions.h"
#include <stdlib.h>

void check_neg(int *a, int *neg, char **neg_num)
{
    if (*a < 0) {
        *a = *a * (-1);
        *neg = 1;
        *neg_num = "-";
    }
}

char *my_itoa(int a)
{
    int neg = 0;
    char *neg_num = "";
    int len = 0;
    int i = 0;
    int mod = 0;
    char *num = "";
    char *num_mod = my_malloc_string((1+1));

    check_neg(&a, &neg, &neg_num);
    len = my_int_len(a);
    num = my_malloc_string((len +neg +1));
    while (i < len) {
        mod = a % 10;
        a = a / 10;
        num_mod[0] = (mod+48);
        num = my_strcat(num, num_mod);
        i++;
    }
    my_free_string(num_mod);
    return (my_revstr(my_strcat(num, neg_num)));
}