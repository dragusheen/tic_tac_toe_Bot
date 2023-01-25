/*
** EPITECH PROJECT, 2022
** sort integer array
** File description:
** Sort the array given in parameters in ascending order
*/

#include "../../lit_lib.h"

int ll_sortint_verif_order2(int *array, int i, int j)
{
    if ( array[i] > array[j] )
        return 1;
    else
        return 0;
}

int ll_sortint_verif_order1(int *array, int size)
{
    int result = 0;
    for ( int i = 0 ; i <= size ; i++){
        for ( int j = i + 1 ; j <= size ; j++){
            result += ll_sortint_verif_order2(array, i, j);
        }
    }
    return result;
}

void ll_sortint_swap( int *array, int i)
{
    if ( array[i] > array[i + 1] )
        ll_swapint(array, i, i + 1);
}

void ll_sortint(int *array, int size)
{
    while ( ll_sortint_verif_order1(array, size) != 0 ){
        for ( int i = 0 ; i < size ; i++){
            ll_sortint_swap(array, i);
        }
    }
}
