/*
** EPITECH PROJECT, 2022
** duplicate string from n to n
** File description:
** Return the string given in parameter from n to n
*/

#include "../../lit_lib.h"

char *ll_dupstringnn(char *string, int beginning, int end)
{
    int size = end - beginning;
    int j = 0;
    char *dup_s = malloc(sizeof(char) * (size + 1));
    for ( int i = beginning; i != end ; i++, j++)
        dup_s[j] = string[i];
    dup_s[size] = '\0';
    return dup_s;
}
