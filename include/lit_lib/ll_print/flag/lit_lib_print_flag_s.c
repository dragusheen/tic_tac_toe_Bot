/*
** EPITECH PROJECT, 2022
** lit_lib_print_flag_i
** File description:
** print un nombre
*/

#include "../../lit_lib.h"

char *convert_upper(char *string)
{
    for ( int i = 0; string[i] != '\0' ; i++)
        if ( string[i] >= 'a' && string[i] <= 'z' )
            string[i] -= 32;
    return string;
}

char *convert_lower(char *string)
{
    for ( int i = 0; string[i] != '\0' ; i++)
        if ( string[i] >= 'A' && string[i] <= 'Z' )
            string[i] += 32;
    return string;
}

void lit_lib_print_flag_s(va_list va, char *str, int index)
{
    char *tmp = va_arg(va, char*);
    int size = ll_len(tmp);
    char *string = malloc(sizeof(char) * size + 1);
    for ( int i = 0 ; i < size ; i++ )
        string[i] = tmp[i];
    string[size] = '\0';
    if ( str[index + 2] == 'c'){
        ll_putstr(convert_lower(string));
    } else if ( str[index + 2] == 'C'){
        ll_putstr(convert_upper(string));
    } else {
        ll_putstr(string);
    }
    free (string);
}
