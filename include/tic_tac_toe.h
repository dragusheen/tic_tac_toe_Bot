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
    #include <stdio.h>
    #include <stdarg.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include <time.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <dirent.h>
    #include <errno.h>
    #include <fcntl.h>
    #include <unistd.h>



//Personal Include


/*========================== STRUCTURE =======================*/

typedef struct ai_info{
    int **board;
} ai_info ;

typedef struct all_info{
    ai_info *ai;
    char **board;
    char winner;
} all_info;

typedef struct s_i2{
    int x;
    int y;
} s_i2 ;

/*============================= SRC ==========================*/

/*AI*/
void ai_turn(all_info *all);

/*Board*/
char **mod_board(char **board, int x, int y, char who);
char **create_board(void);

/*Func*/
char **duptab(char **tab);
int equal3(char a, char b, char c);
s_i2 *len_tab(char **table);

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
void choose_placement(s_i2 *move, all_info *all);

/*Verif End*/
int verif_end(all_info *all);


/*============================= SRC ==========================*/

    #define B all->board


#endif /* !PROJECT_H_ */
