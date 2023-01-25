/*
** EPITECH PROJECT, 2022
** lit_lib_print_flag_c
** File description:
** Display a character
*/

#include "../../lit_lib.h"

void lit_lib_print_flag_f(va_list va, char *str, int index)
{
    int round = 6;
    if ( str[index + 2] >= '0' && str[index + 2] <= '9'){
        round = 0;
        for ( int i = index + 2 ; str[i] >= '0' && str[i] <= '9'; i++){
            round = round * 10 + str[i] - '0';
        }
    }
    ll_putfloat(va_arg(va, double), round);
}
