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
	(void)argv;

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