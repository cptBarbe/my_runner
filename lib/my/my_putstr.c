/*
** EPITECH PROJECT, 2017
** my_putstr
** File description:
** print the character string passed in parameter
*/

#include <unistd.h>

int my_strlen(char const *);

int my_putstr(char const *str)
{
	write(1, str, my_strlen(str));
	return (my_strlen(str));
}
