/*
** EPITECH PROJECT, 2020
** my_put_nbr_base
** File description:
** Print number convert to base
*/

#include "c_functions.h"

int my_put_nbr_base(int num, int base, int lower)
{
    int ent = 0;
    int dec = 0;
    char **num_conv = my_malloc_array_string(1);
    int i = 0;

    while (num >= base) {
        ent = num / base;
        dec = num % base;
        num = ent;
        num_conv = my_resize_string_array(num_conv);
        num_conv[i] = my_itoa(dec);
        i++;
    }
    num_conv = my_resize_string_array(num_conv);
    if (i == 0)
        num_conv[i] = my_itoa(num);
    else
        num_conv[i] = my_itoa(ent);
    change_letters(my_rev_arr_str(num_conv), lower);
    return (my_putstr(my_arr_to_str(num_conv)));
}