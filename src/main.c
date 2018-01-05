/*
** EPITECH PROJECT, 2017
** my_runner_bootstrap
** File description:
** my_runner_bootstrap
*/

#include "my.h"
#include "runner.h"

int main(/*int argc, char **argv, char **env*/)
{
	texture_t *texture = set_textures();
	object_t *obj = set_objects();

	if (my_runner(texture, obj) == FAILURE)
		return (FAILURE);
	return (SUCCESS);
}