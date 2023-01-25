/*
** EPITECH PROJECT, 2022
** lit_lib_print_flag_t
** File description:
** Display a table
*/

#include "../../lit_lib.h"

void table_of_int( int **tab, char *str, int index)
{
    int rows; int cols; int i;
    for ( index = index + 3 ; str[index] >= '0' && str[index] <= '9' ; index++)
        rows = rows * 10 + str[index] - '0';
    for ( index = index + 1 ; str[index] >= '0' && str[index] <= '9' ; index++)
        cols = cols * 10 + str[index] - '0';
    for (i = 0; i < rows ; i++){
        for (int j = 0; j < cols ; j++){
            ll_print("[{i}]\t", tab[i][j]);
        }
        ll_putchar('\n');
    }
    for (int j = 0; j < cols ; j++){
        ll_print("[{i}]\t", tab[i][j]);
    }
}

void table_of_double( double **tab, char *str, int index)
{
    int rows; int cols; int i;
    for ( index = index + 3 ; str[index] >= '0' && str[index] <= '9' ; index++)
        rows = rows * 10 + str[index] - '0';
    for ( index = index + 1 ; str[index] >= '0' && str[index] <= '9' ; index++)
        cols = cols * 10 + str[index] - '0';
    for (i = 0; i < rows ; i++){
        for (int j = 0; j < cols ; j++){
            ll_print("[{f}]\t", tab[i][j]);
        }
        ll_putchar('\n');
    }
    for (int j = 0; j < cols ; j++){
        ll_print("[{f}]\t", tab[i][j]);
    }
}

void table_of_char(char **tab)
{
    for (int i = 0; tab[i] != 0 ; i++){
        for (int j = 0; tab[i][j] != '\0'; j++){
            ll_print("{c}", tab[i][j]);
        }
        ll_putchar('\n');
    }
}

void lit_lib_print_flag_t(va_list va, char *str, int index)
{
    if ( str[index + 2] == 'i'){
        table_of_int(va_arg(va, int **), str, index);
    } else if ( str[index + 2] == 'f'){
        table_of_double(va_arg(va, double **), str, index);
    } else {
        if ( str[index + 2] == 'c'){
            table_of_char(va_arg(va, char **));
        } else {
            ll_print("{bo} Unsupported table type {bc}");
        }
    }
}
