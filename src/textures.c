/*
** EPITECH PROJECT, 2017
** textures
** File description:
** textures
*/

#include "runner.h"

void set_sprites(texture_t *texture)
{
	texture->sp_back = sfSprite_create();
	texture->sp_city = sfSprite_create();
	texture->sp_buildings = sfSprite_create();
	texture->sp_logo = sfSprite_create();
	texture->sp_trump = sfSprite_create();
	texture->sp_mist = sfSprite_create();
	texture->sp_moon = sfSprite_create();
}

texture_t *set_textures(void)
{
	texture_t *texture = malloc(sizeof(texture_t));

	texture->tex_back = sfTexture_createFromFile("./assets/Background.png",
							 NULL);
	texture->tex_city = sfTexture_createFromFile("./assets/city.png",
							 NULL);
	texture->tex_buildings = sfTexture_createFromFile("./assets/buildings.png",
							 NULL);
	texture->tex_logo = sfTexture_createFromFile("./assets/logo.png",
							NULL);
	texture->tex_trump = sfTexture_createFromFile("./assets/Trump.png",
							NULL);
	texture->tex_mist = sfTexture_createFromFile("./assets/mist.png",
							NULL);
	texture->tex_moon = sfTexture_createFromFile("./assets/moon.png",
							NULL);
	set_sprites(texture);
	return (texture);
}

object_t *set_objects(void)
{
	object_t *obj = malloc(sizeof(object_t));

	return (obj);
}

text_t *set_text(void)
{
	text_t *text = malloc(sizeof(text_t));

	text->text = sfText_create();
	text->font = sfFont_createFromFile("./assets/fonts/game_over.ttf");
	sfText_setFont(text->text, text->font);
	return (text);
}