/*
** EPITECH PROJECT, 2023
** main
** File description:
** main
*/

#include "../include/tic_tac_toe.h"

int main(void)
{
    initscr(); cbreak(); noecho(); keypad(stdscr, TRUE);
    all_info *all = create_all();
    game_loop(all);
    destroy_all(all);
}
