/*
** EPITECH PROJECT, 2021
** size_bytes.c
** File description:
** size_bytes.c
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

int my_size_bytes(char *path)
{
    struct stat st;

    stat(path, &st);
    return (st.st_size);
}