/*
** EPITECH PROJECT, 2017
** set_assets
** File description:
** set_assets
*/

#include "my.h"
#include "runner.h"

void set_assets(texture_t *texture, object_t *obj, sfVideoMode mode)
{
	obj->cl = sfClock_create();
	obj->window = sfRenderWindow_create(mode, "my_runner", sfClose, NULL);
	sfSprite_setTexture(texture->sp_back, texture->tex_back, sfTrue);
	sfSprite_setTexture(texture->sp_city, texture->tex_city, sfTrue);
	sfSprite_setTexture(texture->sp_buildings, texture->tex_buildings, sfTrue);
	sfRenderWindow_setFramerateLimit(obj->window, 50);
}