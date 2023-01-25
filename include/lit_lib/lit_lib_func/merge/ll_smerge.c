/*
** EPITECH PROJECT, 2022
** string merge
** File description:
** Merge the two string given in parameters
*/

#include "../../lit_lib.h"

char *ll_smerge(char *string1, char *string2)
{
    int len_tot = ll_len(string1) + ll_len(string2);
    char *string = malloc(sizeof(char) * len_tot + 1);
    string[len_tot] = '\0';

    for ( int i = 0 ; i < ll_len(string1) ; i++)
        string[i] = string1[i];
    for ( int i = ll_len(string1) ; i < len_tot ; i++)
        string[i] = string2[i - ll_len(string1)];

    return string;
}
