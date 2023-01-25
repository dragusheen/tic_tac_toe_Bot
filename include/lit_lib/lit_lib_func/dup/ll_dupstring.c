/*
** EPITECH PROJECT, 2022
** duplicate string
** File description:
** Return the string given in parameter
*/

#include "../../lit_lib.h"

char *ll_dupstring(char *string)
{
    char *dup_s = malloc(sizeof(char) * ( ll_len(string) + 1));
    for ( int i = 0 ; string[i] != '\0' ; i++)
        dup_s[i] = string[i];
    dup_s[ll_len(string)] = '\0';
    return dup_s;
}
