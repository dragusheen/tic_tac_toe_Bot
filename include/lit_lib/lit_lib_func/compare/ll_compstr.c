/*
** EPITECH PROJECT, 2022
** compstr
** File description:
** Compare the two strings given in parameter
*/

#include "../../lit_lib.h"

int ll_compstr(char *string1, char *string2)
{
    if ( ll_len(string1) != ll_len(string2) )
        return 0;
    for ( int i = 0 ; string1[i] != '\0' ; i++ )
        if ( string1[i] != string2[i] )
            return 0;
    return 1;
}
