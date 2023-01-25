/*
** EPITECH PROJECT, 2022
** lit_lib_print_flag_c
** File description:
** Display a number
*/

#include "../../lit_lib.h"

void lit_lib_print_flag_c(va_list va, char *str, int index)
{
    ll_putchar(va_arg(va, int));
}
