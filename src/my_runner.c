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

int menu(texture_t *texture, object_t *obj, text_t *text)
{
	sfRenderWindow_clear(obj->window, sfBlack);
	sfText_setString(text->text, "Press any key for start");
	sfText_setCharacterSize(text->text, 70);
	sfRenderWindow_drawSprite(obj->window, texture->sp_back, NULL);
	sfRenderWindow_drawSprite(obj->window, texture->sp_moon, NULL);
	sfRenderWindow_drawSprite(obj->window, texture->sp_city, NULL);
	sfRenderWindow_drawSprite(obj->window, texture->sp_buildings, NULL);
	sfRenderWindow_drawSprite(obj->window, texture->sp_mist, NULL);
	sfRenderWindow_drawSprite(obj->window, texture->sp_logo, NULL);
	sfRenderWindow_drawText(obj->window, text->text, NULL);
	sfRenderWindow_display(obj->window);
	sfSprite_setPosition(texture->sp_logo, texture->logo_position);
	sfText_setPosition(text->text, text->text_position);
	text->text_position.x = 250;
	text->text_position.y = 270;
	check_quit(obj);
	return ((obj->event.type == sfEvtKeyPressed) ? 42 : SUCCESS);
}

int game(texture_t *texture, object_t *obj, text_t *text)
{
	check_quit(obj);
	sfText_setString(text->text, "Score:");
	sfText_setCharacterSize(text->text, 70);
	draw(obj->window, texture);
	sfRenderWindow_drawText(obj->window, text->text, NULL);
	obj->time = sfClock_getElapsedTime(obj->cl);
	obj->sec = sfTime_asSeconds(obj->time);
	check_time(obj, texture);
	sfSprite_setTextureRect(texture->sp_trump, *texture->ar);
	sfText_setPosition(text->text, text->text_position);
	text->text_position.x = 420;
	text->text_position.y = 420;
	//if (score == 142)
	//	return (42);
	return (SUCCESS);
}

int my_runner()
{
	texture_t *texture = set_textures();
	object_t *obj = set_objects();
	text_t *text = set_text();
	sfVideoMode mode = {800, 600, 60};
	sfMusic *music = sfMusic_createFromFile("assets/Money.ogg");
	int state = 0;

	set_assets(texture, obj, mode);
	if (!obj->window || !music || !texture || !obj)
		return (FAILURE);
	//sfMusic_play(music);
	while (sfRenderWindow_isOpen(obj->window)) {
		do {
			if (state == 0 && menu(texture, obj, text) == 42)
				state = (state == 0 && menu(texture, obj, text) == 42) ? 1 : 0;
			if (state == 1 && game(texture, obj, text) == 42)
				state = 0;
		} while (sfRenderWindow_pollEvent(obj->window, &obj->event));
	}
	clean(texture, obj, music);
	return (SUCCESS);
}