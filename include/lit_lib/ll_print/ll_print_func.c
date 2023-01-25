/*
** EPITECH PROJECT, 2022
** ll_print_func
** File description:
** ll_print function
*/

#include "../lit_lib.h"

int check_char(char c)
{
    char allowed_char[] = "Bbcfist";
    for (int i = 0; allowed_char[i] != '\0'; i++)
        if (allowed_char[i] == c)
            return (1);
}

int next_flag(char *str, int index)
{
    int i = index + 1;
    if ( check_char(str[i]) == 1 )
        return (1);
    return (0);
}
