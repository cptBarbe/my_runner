##
## EPITECH PROJECT, 2019
## makefile
## File description:
## makefile
##

## ------ COLORS ------ ##

DEFAULT     =   "\033[00m"
RED         =   "\033[31m"
GREEN       =   "\033[1;32m"
TEAL        =   "\033[1;36m"
YELLOW      =   "\033[1;7;25;33m"
MAGENTA     =   "\033[1;3;4;35m"
ERROR       =   "\033[5;7;1;31m"
BLINK       =   "\033[5m"
END         =   "\n"

CC      =   clang

SRC =   my_puterr.c \
        my_putstr.c \
        my_strlen.c \
        my_strcmp.c \

CFLAGS  =   -W -Wall -Wextra -Wpedantic -Wpadded -fdiagnostics-color=always -std=c99 -O3

OBJ     =   $(SRC:.c=.o)

NAME    =   libmy.a

%.o:	%.c
	@$(CC)  $(CFLAGS) -c $< -o $@ && \
	printf "["$(GREEN)"OK"$(DEFAULT)"] "$(TEAL)$<$(DEFAULT)" -----> "$(GREEN)$@$(DEFAULT)$(END) || \
	printf "["$(RED)"KO"$(DEFAULT)"] "$(BLINK)$(YELLOW)$^$(DEFAULT)$(END) 1>&2

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@mv $(NAME) ../
	@printf "["$(GREEN)"OK"$(DEFAULT)"]"$(TEAL)" Done : "$(GREEN)$@$(DEFAULT)$(END) || \
	printf "["$(RED)"KO"$(DEFAULT)"]"$(BLINK)$(YELLOW)$(NAME)$(DEFAULT)$(END) 1>&2

debeug: CFLAGS += -g3
debeug: all

clean:
	@rm -f $(OBJ)
	@printf "["$(RED)"DEL"$(DEFAULT)"] $(OBJ)"$(END)

fclean: clean
	@rm -f ../$(NAME)
	@printf "["$(RED)"DEL"$(DEFAULT)"] $(NAME)"$(END)

re: fclean all
