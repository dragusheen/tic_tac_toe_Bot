/*
** EPITECH PROJECT, 2022
** string to integer
** File description:
** Convert a string into a number
*/

#include "../../lit_lib.h"

int ll_stoint(char *str)
{
    for ( int i = 0; str[i] != '\0'; i++ ){
        if (i == 0 && str[i] == '-')
            continue;
        if (str[i] <= '0' || str[i] >= '9')
            return 84;
    }
    int nb = 0;
    int neg = 1;
    int start = 0;
    if ( str[0] == '-'){
        neg *= -1;
        start += 1;
    }
    for (int i = start ; str[i] != '\0' ; i++){
        nb = nb * 10 + (str[i] - 48);
    }
    return nb * neg;
}
