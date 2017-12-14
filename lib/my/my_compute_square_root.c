/*
** EPITECH PROJECT, 2017
** my_compute_square_root
** File description:
** print the square root of the number passed in parameter
*/

int my_square_root(int nb)
{
	int i = 0;

	while (i * i < nb)
		i++;
	return (i);
}
