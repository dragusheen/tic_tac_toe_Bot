/*
** EPITECH PROJECT, 2022
** lit_lib_print_flag_b_cap
** File description:
** Display a backslash option
*/

#include "../../lit_lib.h"

void backslash_n(int count)
{
    for ( int i = 0 ; i < count ; i++)
        ll_putchar('\n');
}

void backslash_t(int count)
{
    for ( int i = 0 ; i < count ; i++)
        ll_putchar('\t');
}

void lit_lib_print_flag_b_cap(va_list va, char *str, int index)
{
    int count = 1;
    if ( str[index + 3] >= '0' && str[index + 3] <= '9' ){
        count = 0;
        for ( int tmp = index + 3 ; str[tmp] >= '0' && str[tmp] <= '9' ; tmp++)
            count = count * 10 + str[tmp] - '0';
    }
    if ( str[index + 2] == 'n'){
        backslash_n(count);
    } else if ( str[index + 2] == 't' ){
        backslash_t(count);
    } else {
        ll_print("{bo} Unsupported backslash type {bc}");
    }
}
