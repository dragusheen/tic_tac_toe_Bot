/*
** EPITECH PROJECT, 2022
** lit_lib_print_flag_b
** File description:
** Display a curly-bracket
*/

#include "../../lit_lib.h"

void lit_lib_print_flag_b(va_list va, char *str, int index)
{
    if ( str[index + 2] == 'c'){
        ll_putchar(125);
    } else if ( str[index + 2] == 'o'){
        ll_putchar(123);
    } else {
        ll_putchar(123);
        ll_putchar(125);
    }
}
