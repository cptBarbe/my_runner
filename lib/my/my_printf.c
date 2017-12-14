/*
** EPITECH PROJECT, 2017
** my_printf
** File description:
** my_printf
*/

#define EXIT_SUCCESS 0
#define EXIT_FAILURE 84
#include <stdarg.h>
#include <stdlib.h>
/*
typedef struct flags
{
	char flag;
	int (*func)();
}flags;

flags t_flags[] = {
	{'s', &my_puststr},
	{'d', &my_putnbr},
	{'c', &my_putchar},
	{'b', &my_putnbr_base},
	{'u', &my_putnbr},
	{'p', &my_putstr}
};
*/
void my_putchar(char);
int my_putstr(char const *);
int my_putnbr(int);
int my_putnbr_base(int, char const *);

void check_flags(char const *fmt, int i, va_list list)
{
	while (fmt[i] != '\0') {
		if (fmt[i] == '%') {
			if (fmt[i+1] == 'd')
				my_putnbr(va_arg(list, int));
			if (fmt[i+1] == 's')
				my_putstr(va_arg(list, char *));
			if (fmt[i+1] == 'c')
				my_putchar(va_arg(list, int));
			if (fmt[i+1] == 'b')
				my_putnbr_base(va_arg(list, int), "01");
			if (fmt[i+1] == 'u')
				my_putnbr(va_arg(list, unsigned int));
			if (fmt[i+1] == 'p') {
				my_putstr("0x");
				my_putnbr(va_arg(list, long));
			}
			i += 2;
		} else 
			my_putchar(fmt[i++]);
	}
}

int my_printf(char const *fmt, ...)
{
	va_list list;
	int i = 0;

	va_start(list, fmt);
	if (fmt == NULL)
		return (EXIT_FAILURE);
	check_flags(fmt, i, list);
	va_end(list);
	return (0);
}