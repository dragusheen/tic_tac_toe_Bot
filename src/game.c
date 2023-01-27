/*
** EPITECH PROJECT, 2023
** main
** File description:
** main
*/

#include "../include/tic_tac_toe.h"

void game_loop(all_info *all)
{
    lls_i2 *move = malloc(sizeof(lls_i2));
    move->x = 1; move->y = 1;
    while (verif_end(all) == 0){
        choose_placement(move, all);
        refresh(); clear();
        if ( verif_end(all))
            break;
        ai_turn(all);
    }
    free(move);
    endwin();
    ll_print("\n");
    for (int i = 0; i < 3 ; i++)
        ll_print("{c}|{c}|{c}\n", B[i][0], B[i][1], B[i][2]);
    if (all->winner == 'X')
        ll_print("You Won !\n\n");
    else if ( all->winner == 'O')
        ll_print("You Lost !\n\n");
    else
        ll_print("Equal !\n\n");
}
