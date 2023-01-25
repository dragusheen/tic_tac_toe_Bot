/*
** EPITECH PROJECT, 2023
** main
** File description:
** main
*/

#include "../include/tic_tac_toe.h"

char **mod_board(char **board, int x, int y, char who)
{
    board[x][y] = who;
    return board;
}

char **create_board(void)
{
    char **board = malloc(sizeof(char *) * 4);
    for ( int i = 0; i < 3; i++)
        board[i] = malloc(sizeof(char) * 4);
    board[3] = 0;
    for ( int i = 0; i < 3; i++)
        for ( int j = 0; j < 3; j++)
            board[i][j] = '.';
    return board;
}
