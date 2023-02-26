##
## EPITECH PROJECT, 2022
## C Pool
## File description:
## Makefile
##

NAME	=	libmy.a

SRC		+=	src/my_intlen.c 			\
			src/my_put_nbr_base.c		\
			src/my_put_nbr.c			\
			src/my_putstr.c				\
			src/my_strlen.c				\
			src/my_strcpy.c				\
			src/print_base.c 			\
			src/print_nbr.c				\
			src/print_modulo.c 			\
			src/print_float.c			\
			src/print_pointer.c 		\
			src/my_compute_power_rec.c	\
			src/my_printf.c				\
			src/print_long_base.c 		\
			src/print_long_nbr.c 		\
			src/print_utils.c			\
			src/check_format.c 			\
			src/my_int_to_array.c 		\
			src/my_revstr.c 			\
			src/init_struct.c 			\
			src/my_show_word_array.c 	\

OBJ		+=	$(SRC:.c=.o)

all: 	$(NAME)

$(NAME): $(OBJ)
	@@ar rc -o $(NAME) $(OBJ)

perso_tests: re clean
	@@cc -o perso_tests main.c $(NAME)
	@@make clean
	@@clear
	@@./perso_tests

unit_tests: fclean all
	cc tests/*.c -o unit_tests -I./include -L./ -lmy --coverage -lcriterion

tests_run: unit_tests
	./unit_tests

clean:
	@@$(shell find . -name "a.out" -delete)
	@@$(shell find . -name "*.o" -delete)
	@@$(shell find . -name "*~" -delete)
	@@$(shell find . -name "\#*\#" -delete)
	@@$(shell find . -name "vgcore.*" -delete)
	@@$(shell find . -name "*.gc*" -delete)
	@@$(shell find . -name "*.log*" -delete)

fclean: clean
	@@rm -f $(NAME)
	@@rm -f perso_tests
	@@rm -f unit_tests

re: fclean all

.PHONY: all clean fclean re
