/*
** EPITECH PROJECT, 2022
** random_generator
** File description:
** random_generator
*/

#include "../lit_lib.h"

int RANDOM;

void increment_var_random(void)
{
    RANDOM++;
    return;
}

int retreive_var_random(void)
{
    return (RANDOM);
}

void init_var_random(void)
{
    RANDOM = 0;
}

int ll_random(int min, int max)
{
    increment_var_random();
    int nb = 0;
    srand(time(NULL));
    for (int i = 0 ; i < retreive_var_random() ; i++)
        nb = rand() % max - min;
    return (nb);
}
