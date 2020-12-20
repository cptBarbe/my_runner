##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
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

CC          =   clang

RULE        =   re

SRC     	=		src/main.c      	\
				src/my_runner.c 	\
				src/textures.c  	\
				src/display.c   	\
				src/set_assets.c	\

CFLAGS  	=   -W -Wall -Wextra -Wpedantic -Wno-deprecated -std=c99 -I include -O3

LDFLAGS  	=   -L lib -lcsfml-system -lcsfml-graphics -lcsfml-window -lcsfml-audio -lmy

OBJ         =   $(SRC:.c=.o)

NAME        =   my_runner

%.o:    %.c
	@$(CC)  $(CFLAGS) -c $< -o $@ && \
	printf "["$(GREEN)"OK"$(DEFAULT)"] "$(TEAL)$<$(DEFAULT)" -----> "$(GREEN)$@$(DEFAULT)$(END) || \
	printf "["$(RED)"KO"$(DEFAULT)"] "$(BLINK)$(YELLOW)$^$(DEFAULT)$(END) 1>&2

all:    $(NAME) ## Build
	@printf "["$(GREEN)"INFO"$(DEFAULT)"] Compiler: $(CC)"$(END)

$(NAME): $(OBJ) ## Linking
	@make -C lib/my
	@$(CC) -o $(NAME) $(OBJ) $(CFLAGS) $(LDFLAGS)
	@printf "["$(GREEN)"OK"$(DEFAULT)"]"$(TEAL)" Done : "$(GREEN)$@$(DEFAULT)$(END) || \
	printf "["$(RED)"KO"$(DEFAULT)"]"$(BLINK)$(YELLOW)$(NAME)$(DEFAULT)$(END) 1>&2

debeug: CFLAGS += -g3 ## Build with debeug symbols
debeug: RULE = debeug
debeug: all

clean: ## Remove obj files
	@make clean -C lib/my
	@rm -f $(OBJ)
	@printf "["$(RED)"DEL"$(DEFAULT)"] $(OBJ)"$(END)

fclean: clean ## Restart to 0
	@make fclean -C lib/my
	@rm -f $(NAME)
	@printf "["$(RED)"DEL"$(DEFAULT)"] $(NAME)"$(END)

re:     fclean all

docker_test: fclean ## Build in docker
	docker run --rm -v $(PWD):/project -it epitechcontent/epitest-docker zsh -c "cd project && make re"

help: ## Display help
	@grep -E '^[a-zA-Z_-]+:.*?## .*$$' $(MAKEFILE_LIST) | sort | awk 'BEGIN {FS = ":.*?## "}; {printf "\033[36m%-30s\033[0m %s\n", $$1, $$2}'

.PHONY: all clean fclean
