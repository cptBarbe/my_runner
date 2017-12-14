/*
** EPITECH PROJECT, 2017
** my_puterr
** File description:
** my_puterr
*/

#include <unistd.h>

int my_strlen(char const *);

void my_puterr(char const *str)
{
	write(2, str, my_strlen(str));
}
