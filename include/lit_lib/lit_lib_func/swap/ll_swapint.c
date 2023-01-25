/*
** EPITECH PROJECT, 2022
** swap integer
** File description:
** Swap the int value of the position index1 and index2
*/

#include "../../lit_lib.h"

void ll_swapint(int *array, int index1, int index2)
{
    int tmp = array[index1];
    array[index1] = array[index2];
    array[index2] = tmp;
}
