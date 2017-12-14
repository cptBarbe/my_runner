/*
** EPITECH PROJECT, 2017
** my_compute_power_rec
** File description:
** power the number passed in parameter
*/

int my_power_rec(int nb, int p)
{
	if (p < 0)
		return (0);
	if (p == 0)
		return (1);
	p = p - 1;
	return (nb * my_power_rec(nb, p));
}
