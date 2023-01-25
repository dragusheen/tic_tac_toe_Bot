/*
** EPITECH PROJECT, 2022
** put string
** File description:
** Display the string given in parameters
*/

#include "../../lit_lib.h"

void ll_putstr(char *string)
{
    for (int i = 0; string[i] != '\0'; i++){
        ll_putchar(string[i]);
    }
}
