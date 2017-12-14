/*
** EPITECH PROJECT, 2017
** my_isneg
** File description:
** isneg
*/

#include <unistd.h>

void my_putchar(char);

int my_isneg(int nb)
{
	char letter;

	if (nb < 0) {
		letter = 'N';
		my_putchar(letter);
	} else {
		letter = 'P';
		my_putchar(letter);
	}
	return (0);
}
