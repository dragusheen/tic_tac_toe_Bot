/*
** EPITECH PROJECT, 2023
** main
** File description:
** main
*/

#include "../include/tic_tac_toe.h"

int get_stat_tab(all_info *all, int x, int y)
{
    if (all->board[x][y] != '.')
        return -1;
    all->board[x][y] = 'O'; int score = 0;
    score += (verif_end(all)) ? 2 : 0;
    all->board[x][y] = 'X';
    score += (verif_end(all)) ? 1 : 0;
    all->board[x][y] = '.';
    return score;
}

void get_ai_tab_stat(all_info *all)
{
    for ( int i = 0; i < 3; i++){
        for ( int j = 0; j < 3; j++){
            all->ai->board[i][j] =
            get_stat_tab(all, i, j);
        }
    }
}

void select_ai_tab(all_info *all)
{
    int x = 0; int y = 0; int max = all->ai->board[0][0];
    for ( int i = 0; i < 3; i++){
        if ( all->ai->board[i][0] > max){
            x = i; y = 0; max = all->ai->board[i][0];
        }
        if ( all->ai->board[i][1] > max){
            x = i; y = 1; max = all->ai->board[i][1];
        }
        if ( all->ai->board[i][2] > max){
            x = i; y = 2; max = all->ai->board[i][2];
        }
    }
    all->board[x][y] = 'O';
}

void ai_turn(all_info *all)
{
    get_ai_tab_stat(all);
    select_ai_tab(all);
}
