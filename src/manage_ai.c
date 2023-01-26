/*
** EPITECH PROJECT, 2023
** main
** File description:
** main
*/

#include "../include/tic_tac_toe.h"

void create_ai(all_info *all)
{
    all->ai = malloc(sizeof(ai_info));
    all->ai->board = malloc(sizeof(int *) * 3);
    for ( int i = 0; i < 3 ; i++)
        all->ai->board[i] = malloc(sizeof(int) * 3);
}

void destroy_ai(all_info *all)
{
    free(all->ai->board);
    free(all->ai);
}
