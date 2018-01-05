/*
** EPITECH PROJECT, 2017
** display
** File description:
** display
*/

#include "my.h"
#include "runner.h"

void refresh_position(texture_t *texture)
{
	sfSprite_setPosition(texture->sp_city, texture->city_position);
	sfSprite_setPosition(texture->sp_buildings, texture->buildings_position);
	sfSprite_setPosition(texture->sp_trump, texture->trump_position);
	sfSprite_setPosition(texture->sp_mist, texture->mist_position);
}

void draw(sfRenderWindow *window, texture_t *texture)
{
	sfRenderWindow_clear(window, sfBlack);
	refresh_position(texture);
	sfRenderWindow_drawSprite(window, texture->sp_back, NULL);
	sfRenderWindow_drawSprite(window, texture->sp_city, NULL);
	sfRenderWindow_drawSprite(window, texture->sp_buildings, NULL);
	sfRenderWindow_drawSprite(window, texture->sp_mist, NULL);
	sfRenderWindow_drawSprite(window, texture->sp_trump, NULL);
	sfRenderWindow_display(window);
}