##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Build the library : lit_lib
##

LIT_LIB	=	lit_lib.h	\
			$(wildcard lit_lib_func/compare/*.c)	\
			$(wildcard lit_lib_func/convert/*.c)	\
			$(wildcard lit_lib_func/dup/*.c)		\
			$(wildcard lit_lib_func/length/*.c)		\
			$(wildcard lit_lib_func/other/*.c)		\
			$(wildcard lit_lib_func/pick/*.c)		\
			$(wildcard lit_lib_func/merge/*.c)		\
			$(wildcard lit_lib_func/put/*.c)		\
			$(wildcard lit_lib_func/sort/*.c)		\
			$(wildcard lit_lib_func/swap/*.c)		\
			$(wildcard ll_print/*.c)				\
			$(wildcard ll_print/flag/*.c)			\
			$(wildcard ll_random/*.c)				\


TO_O	=	gcc -c $(LIT_LIB)

NAME	=	libll.a

all:
		$(TO_O)
	ar rc $(NAME) *.o

clean:
	rm -f *.o
	rm -f *.gch

fclean: clean
	rm -f $(NAME)
	rm -f ../../$(NAME)

re: fclean all

lib: re
	make clean
	mv $(NAME) ../../$(NAME)
