/*
** EPITECH PROJECT, 2017
** runner
** File description:
** runner
*/

#ifndef RUNNER_H_
#define RUNNER_H_
#define SUCCESS 0
#define FAILURE 84
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <SFML/Window.h>
#include <stdlib.h>
#include <stddef.h>

typedef struct texture
{
	sfTexture *tex_back;
	sfSprite * sp_back;
	sfTexture *tex_city;
	sfSprite *sp_city;
	sfTexture *tex_buildings;
	sfSprite *sp_buildings;
	sfTexture *tex_logo;
	sfSprite *sp_logo;
	sfTexture *tex_trump;
	sfSprite *sp_trump;
	sfTexture *tex_mist;
	sfSprite *sp_mist;
	sfVector2f city_position;
	sfVector2f buildings_position;
	sfVector2f logo_position;
	sfVector2f trump_position;
	sfVector2f mist_position;
	sfIntRect *ar;
} texture_t;

typedef struct game_object
{
	sfRenderWindow *window;
	sfEvent event;
	sfClock *cl;
	sfTime time;
	float sec;
} object_t;

object_t *set_objects(void);
texture_t *set_textures(void);
int my_runner(texture_t *, object_t *);
void draw(sfRenderWindow *, texture_t *);
void set_assets(texture_t *, object_t *, sfVideoMode);
void move_positions(texture_t *);
void refresh_position(texture_t *);
void check_time(object_t *, texture_t *);
#endif