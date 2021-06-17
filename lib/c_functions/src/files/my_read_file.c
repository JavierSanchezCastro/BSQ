/*
** EPITECH PROJECT, 2021
** my_read_file.c
** File description:
** my_read_file.c
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "c_functions.h"

char *my_read_file(char *path)
{
    char *buff = NULL;
    int size = my_size_bytes(path);
    int fd = open(path, O_RDONLY);

    if (fd == -1)
        return (NULL);
    buff = malloc((size + 1) * sizeof(char));
    if (!buff)
        return (NULL);
    if (read(fd, buff, size) == -1)
        return (NULL);
    buff[size] = '\0';
    close(fd);
    return (buff);
}