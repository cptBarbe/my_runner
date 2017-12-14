/*
** EPITECH PROJECT, 2017
** display
** File description:
** display
*/

#include "my.h"
#include "runner.h"

void draw(sfRenderWindow *window, texture_t *texture)
{
	sfRenderWindow_clear(window, sfBlack);
	sfRenderWindow_drawSprite(window, texture->sp_back, NULL);
	sfRenderWindow_drawSprite(window, texture->sp_city, NULL);
	sfRenderWindow_drawSprite(window, texture->sp_buildings, NULL);
	sfRenderWindow_display(window);
}