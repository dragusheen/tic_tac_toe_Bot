/*
** EPITECH PROJECT, 2023
** main
** File description:
** main
*/

#include "../include/tic_tac_toe.h"

s_i2 *set_movement(s_i2 *move, int key)
{
    if ( key == KEY_UP && move->x > 0)
        move->x--;
    if ( key == KEY_DOWN && move->x < 2)
        move->x++;
    if ( key == KEY_LEFT && move->y > 0)
        move->y--;
    if ( key == KEY_RIGHT && move->y < 2)
        move->y++;
    return move;
}

void choose_placement(s_i2 *move, all_info *all)
{
    char **dup = duptab(B); int key = 0;
    while (1){
        for (int i = 0; i < 3 ; i++)
            printw("%c|%c|%c\n", dup[i][0], dup[i][1], dup[i][2]);
        dup[move->x][move->y] = B[move->x][move->y]; key = getch();
        if (key == 10)
            break;
        move = set_movement(move, key); dup[move->x][move->y] = '+';
        refresh(); clear();
    }
    if ( B[move->x][move->y] != '.'){
        printw("\nInvalid Position\n"); refresh();
        usleep(1000000); clear();
        choose_placement(move, all);
    } else {
        B[move->x][move->y] = 'X';
    }
    free(dup);
}
