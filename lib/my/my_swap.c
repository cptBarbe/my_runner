/*
** EPITECH PROJECT, 2017
** my_swap
** File description:
** swap the two parameters of the function
*/

#include <unistd.h>

void my_swap(int *a, int *b)
{
	int tmp = 0;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
