/*
** EPITECH PROJECT, 2017
** my_runner_bootstrap
** File description:
** my_runner_bootstrap
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
	if (my_runner() == FAILURE)
		return (FAILURE);
	return (SUCCESS);
}