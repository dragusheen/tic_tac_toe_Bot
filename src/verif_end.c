/*
** EPITECH PROJECT, 2023
** main
** File description:
** main
*/

#include "../include/tic_tac_toe.h"

int equal3(char a, char b, char c)
{
    if ( a != '.' && b != '.' && c != '.')
        if (a == b && a == c)
            return 1;
    return 0;
}

int verif_end_rows(all_info *all)
{
    for ( int i = 0; i < 3 ; i++){
        if (equal3(all->board[i][0], all->board[i][1], all->board[i][2])){
            all->winner = all->board[i][0]; return 1;
        }
    }
    return 0;
}

int verif_end_cols(all_info *all)
{
    for ( int i = 0; i < 3 ; i++){
        if (equal3(all->board[0][i], all->board[1][i], all->board[2][i])){
            all->winner = all->board[0][i]; return 1;
        }
    }
    return 0;
}

int verif_end_diag(all_info *all)
{
    if ( equal3(all->board[0][0], all->board[1][1], all->board[2][2])){
        all->winner = all->board[1][1]; return 1;
    } else if ( equal3(all->board[0][2], all->board[1][1], all->board[2][0])){
        all->winner = all->board[1][1]; return 1;
    } else {
        return 0;
    }
}

int verif_end(all_info *all)
{
    if ( verif_end_rows(all))
        return 1;
    if ( verif_end_cols(all))
        return 1;
    if ( verif_end_diag(all))
        return 1;
    return 0;
}
