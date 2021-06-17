/*
** EPITECH PROJECT, 2021
** BSQ
** File description:
** Main Function
*/

#include "c_functions.h"
#include "bsq.h"
#include "bsq_macros.h"

int main(int argc, char **argv)
{
    if (argc == 2 && my_strcmp(argv[1], HELP_FLAG) == 0)
        return (helpfile());
    if (error_handling(argc, argv) == ERROR)
        return (ERROR);
    return (bsq(argv[1]));
}