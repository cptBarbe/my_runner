/*
** EPITECH PROJECT, 2017
** my_strcmp
** File description:
** my_strcmp
*/

int my_strlen(char const *);

int my_strcmp(char const *s1, char const *s2)
{
	int i;

	if (my_strlen(s1) != my_strlen(s2))
		return (84);
	while (s1[i] != '\0' || s2[i] != '\0') {
		if (s1[i] != s2[i])
			return (84);
		i++;
	}
	return (0);
}
