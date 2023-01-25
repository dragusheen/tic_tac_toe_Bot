/*
** EPITECH PROJECT, 2022
** ll_print
** File description:
** ll_print
*/

#include "../lit_lib.h"

/* my_ll_print functions, handling each flag */

void lit_lib_print_flag_b_cap(va_list va, char *str, int index);
void lit_lib_print_flag_b(va_list va, char *str, int index);
void lit_lib_print_flag_c(va_list va, char *str, int index);
void lit_lib_print_flag_f(va_list va, char *str, int index);
void lit_lib_print_flag_i(va_list va, char *str, int index);
void lit_lib_print_flag_s(va_list va, char *str, int index);
void lit_lib_print_flag_t(va_list va, char *str, int index);

/* External functions for my_ll_print */

int check_char(char c);
int next_flag(char *str, int index);

/* Initializes a function tab */

void (*fct_tab[175])(va_list, char *, int);

/* Starts here */

void tab_flag_create(void)
{
    fct_tab[(int)('B')] = lit_lib_print_flag_b_cap;
    fct_tab[(int)('b')] = lit_lib_print_flag_b;
    fct_tab[(int)('c')] = lit_lib_print_flag_c;
    fct_tab[(int)('f')] = lit_lib_print_flag_f;
    fct_tab[(int)('i')] = lit_lib_print_flag_i;
    fct_tab[(int)('s')] = lit_lib_print_flag_s;
    fct_tab[(int)('t')] = lit_lib_print_flag_t;
}

int flag_handler(char *format, va_list va, int index)
{
    fct_tab[format[index + 1]](va, format, index);
    for ( ; format[index] != 125 ; index++);
    return index;
}

int verif_curly_bracket(char *format)
{
    int cb_count = 0;
    for ( int i = 0; format[i] != '\0'; i++ ){
        if ( format[i] == 123 )
            cb_count += 1;
        if ( format[i] == 125 )
            cb_count -= 1;
    }
    if ( cb_count > 0 )
        ll_putstr("ERROR : MISSING CLOSING CURLY-BRACKET\n");
    else if ( cb_count < 0 )
        ll_putstr("ERROR : MISSING OPENING CURLY-BRACKET\n");
    return cb_count;
}

void ll_print(char *format, ...)
{
    if ( verif_curly_bracket(format) != 0 )
        return;
    va_list arg;
    int c;

    tab_flag_create();
    va_start(arg, format);
    for (int i = 0 ; format[i] != '\0' ; i++){
        if (format[i] == 123 && next_flag(format, i) == 1){
            i = flag_handler(format, arg, i);
        }else{
            ll_putchar(format[i]);
        }
    }
    va_end(arg);
}
