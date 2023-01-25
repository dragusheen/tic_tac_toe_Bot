/*
** EPITECH PROJECT, 2023
** main
** File description:
** main
*/

#include "../include/tic_tac_toe.h"

void game_loop(all_info *all)
{
    while ( verif_end(all) == 0){
        system("clear");
        print_tic_tac_toe(all);
        player_turn(all);
    }
    if (all->winner == 'X')
        ll_print("You Won !\n");
    else
        ll_print("You Lost !\n");
}
