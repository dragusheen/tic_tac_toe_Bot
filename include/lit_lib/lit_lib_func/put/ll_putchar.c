/*
** EPITECH PROJECT, 2022
** put character
** File description:
** Display the character given in parameter
*/

#include "../../lit_lib.h"

void ll_putchar(char character)
{
    write(1, &character, 1);
}
