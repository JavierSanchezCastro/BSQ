/*
** EPITECH PROJECT, 2021
** BSQ
** File description:
** Function to initialize sqr structure
*/

#include "c_functions.h"
#include "bsq.h"

t_biggest_sqr init_sqr_struct(void)
{
    t_biggest_sqr sqr;

    sqr.size = 0;
    sqr.x = 0;
    sqr.y = 0;
    return (sqr);
}