/*
** EPITECH PROJECT, 2023
** main
** File description:
** main
*/

#include "../include/tic_tac_toe.h"

int verif_end_rows(all_info *all)
{
    for ( int i = 0; i < 3 ; i++){
        if (equal3(B[i][0], B[i][1], B[i][2])){
            all->winner = B[i][0];
            return 1;
        }
    }
    return 0;
}

int verif_end_cols(all_info *all)
{
    for ( int i = 0; i < 3 ; i++){
        if (equal3(B[0][i], B[1][i], B[2][i])){
            all->winner = B[0][i];
            return 1;
        }
    }
    return 0;
}

int verif_end_diag(all_info *all)
{
    if ( equal3(B[0][0], B[1][1], B[2][2])){
        all->winner = B[1][1];
        return 1;
    } else if ( equal3(B[0][2], B[1][1], B[2][0])){
        all->winner = B[1][1];
        return 1;
    } else {
        return 0;
    }
}

int verif_complete(all_info *all)
{
    for ( int i = 0; i < 3; i++){
        if ( B[i][0] == '.'){
            all->winner = '%';
            return 0;
        }
        if ( B[i][1] == '.'){
            all->winner = '%';
            return 0;
        }
        if ( B[i][2] == '.'){
            all->winner = '%';
            return 0;
        }
    }
    return 1;
}

int verif_end(all_info *all)
{
    if ( verif_end_rows(all))
        return 1;
    if ( verif_end_cols(all))
        return 1;
    if ( verif_end_diag(all))
        return 1;
    if ( verif_complete(all))
        return 1;
    return 0;
}
