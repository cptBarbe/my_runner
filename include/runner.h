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
	sfVector2f city_position;
	sfVector2f buildings_position;
	sfIntRect *ar;
} texture_t;

typedef struct game_object
{
	sfRenderWindow *window;
	sfEvent event;
	sfClock *cl;
	float time;
} object_t;

object_t *set_objects(void);
texture_t *set_textures(void);
int my_runner(void);
void draw(sfRenderWindow *, texture_t *);
void set_assets(texture_t *, object_t *, sfVideoMode);

#endif