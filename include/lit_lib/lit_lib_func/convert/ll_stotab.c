/*
** EPITECH PROJECT, 2022
** string to table
** File description:
** Convert a string into a table
*/

#include "../../lit_lib.h"

void stotab_find_tab_settings(char *string, lls_i2 *info, char delimiter)
{
    info->x = 0; info->y = 0; int count_x = 0; int i = 0;
    for ( ; string[i] ; i++){
        if ( ll_compchar(string[i], delimiter)){
            info->y++;
            info->x = ( count_x > info->x ) ? count_x : info->x;
            count_x = 0;
        } else {
            count_x++;
        }
    }
    if ( string[i] == '\0' && ll_compchar(string[i - 1], delimiter) == 0)
        info->y++;
}

char **stotab_fill_tab(char **tab, char *string, char delimiter)
{
    int x = 0; int y = 0;
    for ( int i = 0; string[i] ; i++){
        if (ll_compchar(string[i], delimiter)){
            y++; x = 0;
        } else {
            tab[y][x] = string[i];
            x++;
        }
    }
    return tab;
}

char **ll_stotab(char *string, char delimiter)
{
    lls_i2 *info = malloc(sizeof(lls_i2));
    stotab_find_tab_settings(string, info, delimiter);

    char **tab = malloc(sizeof(char *) * ( info->y + 1));
    for ( int i = 0; i < info->y; i++)
        tab[i] = malloc(sizeof(char) * ( info->x + 1));
    for ( int i = 0; i < info->y; i++)
        for ( int j = 0; j < info->x; j++)
            tab[i][j] = '\0';
    tab[info->y] = 0;

    free(info);

    return stotab_fill_tab(tab, string, delimiter);
}
