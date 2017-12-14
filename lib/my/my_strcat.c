/*
** EPITECH PROJECT, 2017
** my_strcat
** File description:
** my_strcat
*/

#include <string.h>

int my_strlen(char const *);

char *my_strcat(char *dest, char const *src)
{
	int i = my_strlen(dest);
	int j = 0;

	while (src[j] != '\0') {
		dest[i++] = src[j++];
	}
	return (0);
}
