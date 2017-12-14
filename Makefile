##
## EPITECH PROJECT, 2017
## makefile
## File description:
## makefile
##

SRC	=	src/main.c		\
		src/my_runner.c		\
		src/textures.c		\
		src/display.c		\
		src/set_assets.c	\

NAME	=	my_runner

OBJ	=       $(SRC:.c=.o)

CFLAGS	=	-W -Wall -Werror -Wextra -Wpedantic -pedantic -I include/

all : $(NAME)

$(NAME) : $(OBJ)
	make re -C lib/my
	gcc -o $(NAME) $(OBJ) -l c_graph_prog -L lib/ -lmy

clean :
	make clean -C lib/my
	rm -f *~
	rm -f .*~
	rm -f \#*
	rm -f .\#*
	rm -f $(OBJ)

fclean : clean
	make fclean -C lib/my
	rm -f $(NAME)

re :	fclean all
