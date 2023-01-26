/*
** EPITECH PROJECT, 2023
** main
** File description:
** main
*/

#include "../include/tic_tac_toe.h"

all_info *create_all(void)
{
    all_info *all = malloc(sizeof(all_info));
    all->board = create_board();
    create_ai(all);
    return all;
}

void destroy_all(all_info *all)
{
    free(all->board);
    destroy_ai(all);
    free(all);
}
