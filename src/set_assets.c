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
	texture->ar = malloc(sizeof(sfIntRect));
	texture->ar->left = 0;
	texture->ar->top = 0;
	texture->ar->width = 57;
	texture->ar-> height = 76;
	sfSprite_setTexture(texture->sp_back, texture->tex_back, sfTrue);
	sfSprite_setTexture(texture->sp_city, texture->tex_city, sfTrue);
	sfSprite_setTexture(texture->sp_buildings, texture->tex_buildings, sfTrue);
	sfSprite_setTexture(texture->sp_logo, texture->tex_logo, sfTrue);
	sfSprite_setTexture(texture->sp_trump, texture->tex_trump, sfTrue);
	sfSprite_setTexture(texture->sp_mist, texture->tex_mist, sfTrue);
	sfSprite_setTexture(texture->sp_moon, texture->tex_moon, sfTrue);
	sfRenderWindow_setFramerateLimit(obj->window, 60);
	texture->logo_position.x = 206;
	texture->logo_position.y = 42;
	texture->trump_position.y = 500;
	texture->trump_position.x = 42;
}

void move_positions(texture_t *texture)
{
	texture->city_position.x -= 2;
	texture->buildings_position.x -= 5;
	texture->mist_position.x -= 7;
	texture->moon_position.x -= 0.05;
	if (texture->moon_position.x <= -800)
		texture->moon_position.x = 400;
	if (texture->city_position.x <= -800)
		texture->city_position.x = 0;
	if (texture->buildings_position.x <= -1000)
		texture->buildings_position.x = 0;
	if (texture->mist_position.x <= -1600)
		texture->mist_position.x = 0;
}

void check_time(object_t *obj, texture_t *texture)
{
	static int status = 0;

	if (obj->sec > 0.03) {
		if (status == 0) {
			texture->ar->left += 100;
			if (texture->ar->left >= 500)
				status = 1;
		}
		if (status == 1) {
			texture->ar->left -= 100;
			if (texture->ar->left <= 0)
				status = 0;
		}
		move_positions(texture);
		sfClock_restart(obj->cl);
	}
}

void clean(texture_t *texture, object_t *obj, sfMusic *music)
{
	sfRenderWindow_destroy(obj->window);
	sfTexture_destroy(texture->tex_back);
	sfTexture_destroy(texture->tex_moon);
	sfTexture_destroy(texture->tex_city);
	sfTexture_destroy(texture->tex_buildings);
	sfTexture_destroy(texture->tex_trump);
	sfSprite_destroy(texture->sp_back);
	sfSprite_destroy(texture->sp_moon);
	sfSprite_destroy(texture->sp_city);
	sfSprite_destroy(texture->sp_buildings);
	sfSprite_destroy(texture->sp_trump);
	sfSprite_destroy(texture->sp_logo);
	sfMusic_destroy(music);
	free(texture);
	free(obj);
}