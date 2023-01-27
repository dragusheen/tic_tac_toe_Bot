/*
** EPITECH PROJECT, 2023
** main
** File description:
** main
*/

#include "../include/tic_tac_toe.h"

char **duptab(char **tab)
{
    lls_i2 *info = ll_len_tab_2(tab);
    char **dup_t = malloc(sizeof(char *) * (info->y + 1));
    for ( int i = 0; i < info->y; i++ )
        dup_t[i] = malloc(sizeof(char) * (info->x + 1));
    dup_t[info->y] = 0;
    for ( int i = 0; i < info->y; i++){
        for ( int j = 0; j < info->x; j++){
            dup_t[i][j] = tab[i][j];
        }
    }
    return dup_t;
}

int equal3(char a, char b, char c)
{
    if (a == b && a == c && ( a == 'X' || a == 'O'))
        return 1;
    return 0;
}
