/*
** EPITECH PROJECT, 2022
** lit_lib
** File description:
** lit_lib functions prototypes
*/

#ifndef LIT_LIB_H_
    #define LIT_LIB_H_

/*--------------------------- INCLUDE ---------------------------*/

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


/*-------------------------- STRUCTURE --------------------------*/

typedef struct lls_i2 {
    long int x;
    long int y;
} lls_i2 ;

typedef struct lls_i3 {
    long int x;
    long int y;
    long int z;
} lls_i3 ;

typedef struct lls_f2 {
    double x;
    double y;
} lls_f2 ;

typedef struct lls_f3 {
    double x;
    double y;
    double z;
} lls_f3 ;


/*--------------------------- FUNCTION --------------------------*/

/*lit_lib_func*/
    /*compare*/
int ll_compchar(char char1, char char2);
int ll_compfloat(double float1, double float2);
int ll_compint(int number1, int number2);
int ll_compstr(char *string1, char *string2);

    /*convert*/
char *ll_ftostring(double number, int round);
char *ll_itostring(int number);
int ll_stoint(char *string);
char **ll_stotab(char *string, char delimiter);

    /*dup*/
char *ll_dupstring(char *string);
char *ll_dupstringnn(char *string, int beginning, int end);

    /*length*/
lls_i2 *ll_len_tab_2(char **table);
int ll_len(char *string);

    /*merge*/
char *ll_multmerge(int counter, ...);
char *ll_scmerge(char *string1, char char1);
char *ll_smerge(char *string1, char *string2);

    /*other*/
char *ll_str_from_filepath(char *filepath);

    /*pick*/
int ll_pick_size(char *filepath);

    /*put*/
void ll_putchar(char character);
void ll_putfloat(double number, int round);
void ll_putnbr(int number);
void ll_putstr(char *string);
void ll_puttab(char **table);

    /*sort*/
void ll_sortint(int *array, int size);

    /*swap*/
void ll_swapchar(char *array, int index1, int index2);
void ll_swapint(int *array, int index1, int index2);


/*ll_print*/
void ll_print(char *format, ...);

/*ll_random*/
int ll_random(int min, int max);


/*--------------------------- MACRO --------------------------*/


#endif /* !LIT_LIB_H_ */
