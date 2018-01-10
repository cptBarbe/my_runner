##
## EPITECH PROJECT, 2017
## makefile
## File description:
## makefile
##

SRC	=	my_puterr.c			\
		my_strlen.c			\

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all : $(NAME)

$(NAME) : $(OBJ)
	ar rc $(NAME) $(OBJ)
	mv $(NAME) ../

clean :
	rm -f $(OBJ)
	rm -f .*~
	rm -f *~
	rm -f \#*

fclean : clean
	rm -f ../$(NAME)

re : fclean all
