/*
** EPITECH PROJECT, 2022
** put number
** File description:
** Display the number given in parameter
*/

#include "../../lit_lib.h"

void ll_putnbr(int number)
{
    if ( number == 0)
        ll_putchar('0');
    if (number < 0){
        ll_putchar('-');
        number *= -1;
    }
    int tmp = number;
    int i;
    for ( i = 0 ; tmp > 0 ; i++)
        tmp /= 10;
    for ( int size = i ; size != 0 ; size --){
        tmp = number;
        for ( int j = 0 ; j < size - 1 ; j++ )
            tmp /= 10;
        ll_putchar(tmp % 10 + '0');
    }
}
