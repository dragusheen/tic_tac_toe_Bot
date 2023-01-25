/*
** EPITECH PROJECT, 2022
** string and character merge
** File description:
** Merge the string and the character given in parameters
*/

#include "../../lit_lib.h"

char *ll_scmerge(char *string1, char char1)
{
    int len_tot = ll_len(string1) + 1;
    char *string = malloc(sizeof(char) * len_tot + 1);
    string[len_tot] = '\0';


    for ( int i = 0 ; i < ll_len(string1) ; i++)
        string[i] = string1[i];
    string[len_tot - 1] = char1;

    return string;
}
