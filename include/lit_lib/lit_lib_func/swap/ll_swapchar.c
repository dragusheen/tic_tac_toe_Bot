/*
** EPITECH PROJECT, 2022
** swap character
** File description:
** Swap the char value of the position index1 and index2
*/

#include "../../lit_lib.h"

void ll_swapchar(char *array, int index1, int index2)
{
    char tmp = array[index1];
    array[index1] = array[index2];
    array[index2] = tmp;
}
