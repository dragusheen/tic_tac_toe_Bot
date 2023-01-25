/*
** EPITECH PROJECT, 2022
** integer to string
** File description:
** Convert a number into a string
*/

#include "../../lit_lib.h"

char *fill_end_string(char *string, int size,
int tot_len, double number)
{
    int tmp = 0;
    for ( int i = size + 1 ; i < tot_len ; i++ ){
        number *= 10; tmp = (int)number;
        string[i] = tmp + '0'; number -= tmp;
    }
    return string;
}

char *ll_ftostring(double number, int round)
{
    int size = 0; int tmp = 0; int nul = 0;
    for ( ; number > 1 ; size++, number /= 10);
    nul = ( size == 0 ) ? 0 : 1;
    size = ( size == 0 ) ? 1 : size;
    int tot_len = size + round + 1;
    char *string = malloc(sizeof(char) * tot_len + 1);
    for ( int i = 0 ; i < tot_len ; i++)
        string[i] = '0';
    string[tot_len] = '\0'; string[size] = '.';
    if ( nul == 1 ){
        for ( int i = 0 ; i < size ; i++ ){
            number *= 10; tmp = (int)number;
            string[i] = tmp + '0'; number -= tmp;
        }
    } else {
        string[0] = '0';
    }
    string = fill_end_string(string, size, tot_len, number);
    return string;
}
