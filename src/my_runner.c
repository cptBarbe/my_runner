/*
** EPITECH PROJECT, 2017
** my_runner
** File description:
** my_runner
*/

//#include "my.h"
#include "runner.h"

void check_quit(object_t *obj)
{
	if (obj->event.type == sfEvtClosed)
		sfRenderWindow_close(obj->window);
}

int menu(texture_t *texture, object_t *obj)
{
	sfRenderWindow_clear(obj->window, sfBlack);
	sfRenderWindow_drawSprite(obj->window, texture->sp_back, NULL);
	sfRenderWindow_drawSprite(obj->window, texture->sp_city, NULL);
	sfRenderWindow_drawSprite(obj->window, texture->sp_buildings, NULL);
	sfRenderWindow_drawSprite(obj->window, texture->sp_mist, NULL);
	sfRenderWindow_drawSprite(obj->window, texture->sp_logo, NULL);
	sfRenderWindow_display(obj->window);
	sfSprite_setPosition(texture->sp_logo, texture->logo_position);
	check_quit(obj);
	return ((obj->event.type == sfEvtMouseButtonPressed) ? 42 : SUCCESS);
}

int game(texture_t *texture, object_t *obj, int i)
{
	i++;
	check_quit(obj);
	draw(obj->window, texture);
	obj->time = sfClock_getElapsedTime(obj->cl);
	obj->sec = sfTime_asSeconds(obj->time);
	check_time(obj, texture);
	sfSprite_setTextureRect(texture->sp_trump, *texture->ar);
	//if (score == 142)
	//	return (42);
	return (SUCCESS);
}

int my_runner(texture_t *texture, object_t *obj)
{
	sfVideoMode mode = {800, 600, 60};
	int i = 0;
	int state = 0;

	set_assets(texture, obj, mode);
	if (!obj->window)
		return (FAILURE);
	while (sfRenderWindow_isOpen(obj->window)) {
		do {
			if (state == 0 && menu(texture, obj) == 42)
				state = 1;
			if (state == 1 && game(texture, obj, i) == 42)
				state = 0;
		} while (sfRenderWindow_pollEvent(obj->window, &obj->event));
	}
	sfRenderWindow_destroy(obj->window);
	free(texture);
	free(obj);
	return (SUCCESS);
}