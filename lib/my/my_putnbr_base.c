/*
** EPITECH PROJECT, 2017
** my_putnbr_base
** File description:
** my_putnbr_base
*/

void my_putchar(char);
int my_putnbr(int);
int my_strlen(char const *);

int my_putnbr_base(int nb, char const *base)
{
	int mod = 0;
	int result = 0;
	int base_t = my_strlen(base);

	if (nb < 0) {
		my_putchar('-');
		nb = nb * (-1);
	}
	if (nb >= 0) {
	}
	return (0);
}
