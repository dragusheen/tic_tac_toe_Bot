/*
** EPITECH PROJECT, 2023
** main
** File description:
** main
*/

#include "../include/tic_tac_toe.h"

int atk_correct_char(char *buffer, all_info *all)
{
    if ( buffer[1] != '\0' || buffer[0] == '\0')
        return 0;
    if ( buffer[0] < '1' || buffer[0] > '9')
        return 0;
    int coord = buffer[0] - '0';
    int rows = 0; int cols = 0;
    for ( ; coord > 3 ; rows++, coord -= 3);
    cols = coord - 1;
    if ( all->board[rows][cols] != '.')
        return 0;
    return 1;
}

void get_coord_to_mod_board(all_info *all, int coord)
{
    int rows = 0; int cols = 0;
    for ( ; coord > 3 ; rows++, coord -= 3);
    cols = coord - 1;
    all->board = mod_board(all->board, rows, cols, 'X');
}

void player_turn(all_info *all)
{
    int coord = 0;
    while (1){
        char *buffer = malloc(sizeof(char) * 3000);
        ll_print("attack: ");
        while (buffer[ll_len(buffer) - 1] != '\n')
            read(1, buffer, 3000);
        buffer[ll_len(buffer) - 1] = '\0';
        if (atk_correct_char(buffer, all)){
            coord = buffer[0] - '0';
            free(buffer);
            break;
        }
        ll_print("wrong position\n");
        usleep(1000000);
        system("clear");
        print_tic_tac_toe(all);
    }
    get_coord_to_mod_board(all, coord);
}
