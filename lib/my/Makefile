##
## EPITECH PROJECT, 2017
## makefile
## File description:
## makefile
##

SRC	=	my_compute_factorial_rec.c	\
		my_compute_factorial_rec.o	\
		my_compute_power_it.c		\
		my_compute_power_it.o		\
		my_compute_power_rec.c		\
		my_compute_power_rec.o		\
		my_compute_square_root.c	\
		my_compute_square_root.o	\
		my_getnbr.c			\
		my_isneg.c			\
		my_printf.c			\
		my_putchar.c			\
		my_puterr.c			\
		my_putnbr_base.c		\
		my_put_nbr.c			\
		my_putstr.c			\
		my_revstr.c			\
		my_strcat.c			\
		my_strcmp.c			\
		my_strcpy.c			\
		my_strlen.c			\
		my_swap.c			\

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
