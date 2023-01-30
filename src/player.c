/*
** EPITECH PROJECT, 2023
** main
** File description:
** main
*/

#include "../include/tic_tac_toe.h"

s_i2 *set_t_movement(s_i2 *t_move, int key)
{
    if ( key == KEY_UP && t_move->x > 0)
        t_move->x--;
    if ( key == KEY_DOWN && t_move->x < 2)
        t_move->x++;
    if ( key == KEY_LEFT && t_move->y > 0)
        t_move->y--;
    if ( key == KEY_RIGHT && t_move->y < 2)
        t_move->y++;
    return t_move;
}

void choose_placement(s_i2 *t_move, all_info *all)
{
    char **dup = duptab(B); int key = 0;
    while (1){
        printw("\n");
        for (int i = 0; i < 3 ; i++)
            printw("%c|%c|%c\n", dup[i][0], dup[i][1], dup[i][2]);
        dup[t_move->x][t_move->y] = B[t_move->x][t_move->y]; key = getch();
        if (key == 10)
            break;
        t_move = set_t_movement(t_move, key); dup[t_move->x][t_move->y] = '+';
        refresh(); clear();
    }
    if ( B[t_move->x][t_move->y] != '.'){
        printw("\nInvalid Position\n"); refresh();
        usleep(1000000); clear(); choose_placement(t_move, all);
    } else {
        B[t_move->x][t_move->y] = 'X';
    }
    free(dup);
}
