/*
** EPITECH PROJECT, 2017
** my_compute_power_it
** File description:
** raise to the power the number passed in parameter
*/

int my_power_it(int nb, int p)
{
	int total = nb;

	if (p < 0)
		return (0);
	if (p == 0)
		return (1);
	while (p != 0) {
		total = total * nb;
		p = p - 1;
		if (total > 2147483647 || total < -2147483648)
			return (0);
	}
	return (total);
}
