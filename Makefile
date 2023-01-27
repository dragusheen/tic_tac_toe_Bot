##
## EPITECH PROJECT, 2022
## project
## File description:
## Makefile
##

SRC	=	include/tic_tac_toe.h	\
		$(wildcard src/*.c)		\

LIB	=	-lncurses	\

NAME	=	tic_tac_toe

all:
	gcc -Wall $(SRC) -o $(NAME) -L. $(LIB)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

run: re
	clear
	./$(NAME)
	make fclean
