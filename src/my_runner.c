/*
** EPITECH PROJECT, 2017
** my_runner
** File description:
** my_runner
*/

#include "my.h"
#include "runner.h"

int get_events(object_t *obj)
{
	while (sfRenderWindow_pollEvent(obj->window, &obj->event)) {
		if (obj->event.type == sfEvtClosed)
			sfRenderWindow_close(obj->window);
	}
        return (SUCCESS);
}

int my_runner(void)
{
	texture_t *texture = set_textures();
	object_t *obj = set_objects();
	sfVideoMode mode = {800, 600, 60};

	set_assets(texture, obj, mode);
	if (!obj->window)
		return (FAILURE);
	while (sfRenderWindow_isOpen(obj->window)) {
		get_events(obj);
		draw(obj->window, texture);
		if (obj->time > 0.1) {
			texture->city_position.x -= 1;
			texture->buildings_position.x -= 2;
			sfClock_restart(obj->cl);
		}
		if (texture->city_position.x == -800)
			texture->city_position.x = 0;
		sfSprite_setPosition(texture->sp_city,
					texture->city_position);
		sfSprite_setPosition(texture->sp_buildings,
					texture->buildings_position);
	}
	sfRenderWindow_destroy(obj->window);
	free(texture);
	free(obj);
	return (SUCCESS);
}
