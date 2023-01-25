/*
** EPITECH PROJECT, 2022
** integer to string
** File description:
** Convert a number into a string
*/

#include "../../lit_lib.h"

char *ll_itostring(int number)
{
    if ( number == 0 ){
        char *string = malloc(sizeof(char) * 2);
        string[0] = '0';
        string[1] = '\0';
        return string;
    }
    int tmp = number;
    int size = 0;
    for ( size = 0 ; tmp > 0 ; size++)
        tmp /= 10;
    char *string = malloc(sizeof(char) * size + 1);
    string[size] = '\0';
    for ( int i = size - 1 ; number > 0 ; i--){
        string[i] = (number % 10) + 48;
        number /= 10;
    }
    return (string);
}
