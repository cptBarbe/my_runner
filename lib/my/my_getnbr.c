/*
** EPITECH PROJECT, 2017
** my_getnbr
** File description:
** my_getnbr
*/

int my_getnbr(char *str)
{
	int nb = 0;
	int isneg = 1;

	while (*str == '+' || *str == '-') {
		if (*str == '-')
			isneg = isneg * -1;
		str++;
	}
	while (*str != '\0') {
		if (*str >= '0' && *str <= '9')
		{
			nb = nb * 10;
			nb = nb + *str - '0';
			str++;
		} else
			return (nb * isneg);
	}
	return (nb * isneg);
}
