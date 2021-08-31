##
## EPITECH PROJECT, 2021
## makefile
## File description:
## makefile
##

SRC	=	./src/main.c			\
		./src/my_func.c			\
		./src/solve.c			\
		./src/display_buffer.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	solver

CFLAGS	=	-I./include

RM	=	rm -f

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(CFLAGS)

clean:
	$(RM) $(OBJ)
	$(RM) *.c~

fclean:	clean
		$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re