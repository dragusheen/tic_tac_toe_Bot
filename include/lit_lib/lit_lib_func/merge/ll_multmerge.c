/*
** EPITECH PROJECT, 2022
** string merge
** File description:
** Merge the two string given in parameters
*/

#include "../../lit_lib.h"

char *ll_multmerge(int counter, ...)
{
    va_list list;
    va_start(list, counter);

    char *result = ll_dupstring("\0");
    for ( ; counter > 0 ; counter--)
        result = ll_smerge(result, va_arg(list, char *));

    va_end(list);
    return result;
}
