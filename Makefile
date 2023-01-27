##
## EPITECH PROJECT, 2022
## project
## File description:
## Makefile
##

SRC	=	include/tic_tac_toe.h	\
		$(wildcard src/*.c)		\

LIB	=	-lll		\
		-lncurses	\

NAME	=	tic_tac_toe

all: lib
	gcc -Wall $(SRC) -o $(NAME) -L. $(LIB)

clean:
	rm -f *.o

fclean: clean
	make -C include/lit_lib/ fclean
	rm -f $(NAME)

re: fclean all

lib:
	make -C include/lit_lib/ lib

run: re
	clear
	./$(NAME)
	make fclean

help: re
	clear
	./$(NAME) -h
	make fclean
