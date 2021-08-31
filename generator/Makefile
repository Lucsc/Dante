##
## EPITECH PROJECT, 2021
## B-CPE-200-PAR-2-1-bsdante-thomas.willson
## File description:
## Makefile
##

SRC	=	./src/main.c			\
		./src/binary_algo_perf.c	\
		./src/binary_algo_imperf.c	\
		./src/print_map.c		\
		./src/malloc_2d_map.c		\
		./src/file_map.c		\
		./src/do_random.c		\
		./src/init_game.c		\
		./src/error_usage.c		\
		./src/hand_error.c		\

OBJ	=	${SRC:.c=.o}

NAME	=	generator

CFLAGS	+=	-I./include

RM	=	rm -f

all:	${NAME}

${NAME}:	${OBJ}
	${CC} -o ${NAME} ${OBJ} ${CFLAGS}

clean:
	${RM} ${OBJ}
	${RM} include/*.h~
	${RM} src/*.c~

fclean:	clean
		${RM} ${NAME}

re:	fclean all

.PHONY:	all clean fclean re
