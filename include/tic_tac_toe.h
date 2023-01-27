/*
** EPITECH PROJECT, 2022
** project
** File description:
** project
*/

#ifndef PROJECT_H_
    #define PROJECT_H_


/*=========================== INCLUDE ========================*/

//General Include
    #include <ncurses.h>


//Personal Include
    #include "lit_lib/lit_lib.h"


/*========================== STRUCTURE =======================*/

typedef struct ai_info{
    int **board;
} ai_info ;

typedef struct all_info{
    ai_info *ai;
    char **board;
    char winner;
} all_info;

/*============================= SRC ==========================*/

/*AI*/
void ai_turn(all_info *all);

/*Board*/
char **mod_board(char **board, int x, int y, char who);
char **create_board(void);

/*Func*/
char **duptab(char **tab);
int equal3(char a, char b, char c);

/*Game*/
void game_loop(all_info *all);

/*Main*/
int main(void);

/*Manage AI*/
void destroy_ai(all_info *all);
void create_ai(all_info *all);

/*Manage All*/
all_info *create_all(void);
void destroy_all(all_info *all);

/*Player*/
void choose_placement(lls_i2 *move, all_info *all);

/*Verif End*/
int verif_end(all_info *all);


/*============================= SRC ==========================*/

    #define B all->board


#endif /* !PROJECT_H_ */
