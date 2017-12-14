/*
** EPITECH PROJECT, 2017
** my_revstr
** File description:
** print a character string forwards and backwards
*/

#include <unistd.h>

void my_putchar(char);
int my_putstr(char *);

char *my_revstr(char *str)
{
	int n = 0;
	char *str2;

	while (*str != '\0') {
		str++;
		n = n + 1;
		}
	while (*str >= (*str - n)) {
		str--;
		n--;
		my_putchar(*str);
        }
	return (str);
}
