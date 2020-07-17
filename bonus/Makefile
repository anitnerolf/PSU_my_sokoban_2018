##
## EPITECH PROJECT, 2018
## PSU_my_sokoban_2018
## File description:
## PSU_my_sokoban_2018
##

SRC	=	first_file.c	\
		second_file.c	\
		third_file.c	\
		my_strlen.c	\
		my_putchar.c	\
		my_putstr.c	\
		main.c		\
		usage_h.c

OBJ	=	$(SRC:.c=.o)

NAME	=	my_sokoban

CFLAGS	=	-g -g3 -ggdb -I ./include -lncurses

all:		$(NAME)

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f *~ $(NAME)

re:		fclean all
