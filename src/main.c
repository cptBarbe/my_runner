/*
** EPITECH PROJECT, 2017
** main
** File description:
** main
*/

#include "my.h"
#include "runner.h"

int main(int argc, char **argv, char **env)
{
	(void)argc;

	if (argv[1] && my_strcmp(argv[1], "-h") == 0) {
		my_putstr("Finite runner created with CSFML.\n\n");
		my_putstr("USAGE\n\t./my_runner map.txt\n\n\n");
		my_putstr("OPTIONS\n\t"
			"-i\tlaunch the game in infinity mode.\n");
		my_putstr("\t-h\tprint the usage and quit.\n\n");
		my_putstr("USER INTERACTIONS\n\tSPACE_KEY\tjump.\n");
		return (SUCCESS);
	}
	if (*env == NULL) {
		my_puterr("Error: env variables cannot be loaded\n");
		return (FAILURE);
	}
	if (my_runner() == FAILURE) {
		my_puterr("Error: the game cannot be run\n");
		return (FAILURE);
	}
	return (SUCCESS);
}
