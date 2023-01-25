/*
** EPITECH PROJECT, 2022
** put table
** File description:
** Display the table given in parameter
*/

#include "../../lit_lib.h"

void ll_puttab(char **table)
{
    for ( int i = 0 ; table[i] != 0 ; i++){
        for ( int j = 0 ; table[i][j] != '\0' ; j++){
            ll_putchar(table[i][j]);
        }
        ll_putchar('\n');
    }
}
