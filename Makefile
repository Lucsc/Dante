##
## EPITECH PROJECT, 2021
## B-CPE-200-PAR-2-1-bsdante-thomas.willson
## File description:
## Makefile
##


all:
		make -C ./generator/
		make -C ./solver/

clean:
		make clean -C ./generator/
		make clean -C ./solver/

fclean: clean
		make fclean -C ./generator/
		make fclean -C ./solver/


re:	fclean all

.PHONY:	re clean fclean all