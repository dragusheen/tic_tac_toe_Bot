/*
** EPITECH PROJECT, 2022
** length of 2D table
** File description:
** Return a struct that contain the information
** of the table given in parameters
*/

#include "../../lit_lib.h"

lls_i2 *ll_len_tab_2(char **table)
{
    lls_i2 *info = malloc(sizeof(lls_i2));
    info->x = ll_len(table[0]);
    for ( int i = 0 ; table[i] != NULL ; i++ )
        info->y += 1;
    return info;
}
