/*
** EPITECH PROJECT, 2022
** string from filepath
** File description:
** Get and return a str from the filepath given in parameter
*/

#include "../../lit_lib.h"

char *ll_str_from_filepath(char *filepath)
{
    struct stat file;
    stat(filepath, &file);
    int fd;
    int size = file.st_size + 1;
    char *str = malloc(sizeof(char) * size);
    for ( int i = 0; i < size ; i++)
        str[i] = '\0';

    fd = open(filepath, O_RDONLY);
    read(fd, str, size);

    if ( errno == 21 || fd == -1)
        return "ERROR";
    return str;
}
