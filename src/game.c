/*
** EPITECH PROJECT, 2023
** main
** File description:
** main
*/

#include "../include/tic_tac_toe.h"

void game_loop(all_info *all)
{
    s_i2 *t_move = malloc(sizeof(s_i2)); t_move->x = 1; t_move->y = 1;
    while (verif_end(all) == 0){
        choose_placement(t_move, all); refresh(); clear();
        if ( verif_end(all))
            break;
        ai_turn(all);
    }
    free(t_move); refresh(); clear();
    printw("\n");
    for (int i = 0; i < 3 ; i++)
        printw("%c|%c|%c\n", B[i][0], B[i][1], B[i][2]);
    if (all->winner == 'X')
        printw("\nYou Won !\n\n");
    else if ( all->winner == 'O')
        printw("\nYou Lost !\n\n");
    else
        printw("\nEquality !\n\n");
    refresh(); usleep(4000000);
}
