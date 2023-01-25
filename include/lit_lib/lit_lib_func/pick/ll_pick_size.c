/*
** EPITECH PROJECT, 2022
** pick size
** File description:
** Return the size of the file given in parameters
*/

#include "../../lit_lib.h"

int ll_pick_size(char *filepath)
{
    struct stat file;
    stat(filepath, &file);
    int size = file.st_size;
    free(filepath);
    return size;
}
