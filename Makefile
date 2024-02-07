##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##

SRC	=	$(shell echo src/*.c)

OBJ	=	$(SRC:.c=.o)

NAME	=	my_runner

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) -lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio

clean:
	rm -f $(OBJ)
	rm -f src/*~

fclean: clean
	rm -f $(NAME)

re:	fclean all
