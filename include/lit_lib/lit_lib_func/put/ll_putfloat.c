/*
** EPITECH PROJECT, 2022
** put float
** File description:
** Display the double given in parameter
*/

#include "../../lit_lib.h"

void ll_putfloat(double number, int round)
{
    int part = (int)number;
    ll_putnbr(part);
    ll_putchar('.');
    for ( int i = 0 ; i < round ; i++ ){
        number = ( number - part ) * 10;
        part = (int)number;
        ll_putnbr(part);
    }
}
