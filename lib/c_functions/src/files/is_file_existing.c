/*
** EPITECH PROJECT, 2021
** is_file_existing.c
** File description:
** is_file_existing.c
*/

#include <stdbool.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

bool is_file(const char *path)
{
    struct stat path_stat;

    stat(path, &path_stat);
    return (S_ISREG(path_stat.st_mode));
}

bool is_file_existing(const char *path)
{
    struct stat buffer;
    int exist = stat(path, &buffer);

    if (exist == -1)
        return (false);
    return (is_file(path));
}