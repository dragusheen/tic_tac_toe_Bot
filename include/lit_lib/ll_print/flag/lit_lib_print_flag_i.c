/*
** EPITECH PROJECT, 2022
** lit_lib_print_flag_i
** File description:
** Display a number
*/

#include "../../lit_lib.h"

void lit_lib_print_flag_i(va_list va, char *str, int index)
{
    ll_putnbr(va_arg(va, int));
}
