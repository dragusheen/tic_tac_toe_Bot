/*
** EPITECH PROJECT, 2022
** length of string
** File description:
** Return the length of the string given in parameter
*/

#include "../../lit_lib.h"

int ll_len(char *string)
{
    int count = 0;

    for (int i = 0; string[i] != '\0'; i++){
        count += 1;
    }
    return (count);
}
