/*
** EPITECH PROJECT, 2023
** main
** File description:
** main
*/

#include "../include/tic_tac_toe.h"

void print_tic_tac_toe(all_info *all)
{
    ll_print("{c}|{c}|{c}      1|2|3\n",
    all->board[0][0], all->board[0][1], all->board[0][2]);
    ll_print("{c}|{c}|{c}  =>  4|5|6\n",
    all->board[1][0], all->board[1][1], all->board[1][2]);
    ll_print("{c}|{c}|{c}      7|8|9\n",
    all->board[2][0], all->board[2][1], all->board[2][2]);
    ll_print("\n");
}
