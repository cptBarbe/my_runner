/*
** EPITECH PROJECT, 2017
** textures
** File description:
** textures
*/

#include "my.h"
#include "runner.h"

texture_t *set_textures(void)
{
	texture_t *texture = malloc(sizeof(texture_t));

	texture->tex_back = sfTexture_createFromFile("./assets/Background.png",
							 NULL);
	texture->sp_back = sfSprite_create();
	texture->tex_city = sfTexture_createFromFile("./assets/city.png",
							 NULL);
	texture->sp_city = sfSprite_create();
	texture->tex_buildings = sfTexture_createFromFile("./assets/buildings.png",
							 NULL);
	texture->sp_buildings = sfSprite_create();
	return (texture);
}

object_t *set_objects(void)
{
	object_t *obj = malloc(sizeof(object_t));

	return (obj);
}