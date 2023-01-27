/*
** EPITECH PROJECT, 2023
** main
** File description:
** main
*/

#include "../include/tic_tac_toe.h"

int len(char *string)
{
    int count = 0;

    for (int i = 0; string[i] != '\0'; i++){
        count += 1;
    }
    return (count);
}

s_i2 *len_tab(char **table)
{
    s_i2 *info = malloc(sizeof(s_i2));
    info->x = len(table[0]);
    for ( int i = 0 ; table[i] != NULL ; i++ )
        info->y += 1;
    return info;
}

char **duptab(char **tab)
{
    s_i2 *info = len_tab(tab);
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
