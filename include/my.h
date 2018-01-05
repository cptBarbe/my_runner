/*
** EPITECH PROJECT, 2017
** my
** File description:
** my C header file
*/

#ifndef MY_H_
#define MY_H_
#include <unistd.h>

void my_putchar(char);
int my_isneg(int);
int my_putnbr(int);
int my_putnbr_base(int, char const *);
int my_swap(int *, int *);
int my_printf(char const *, ...);
void my_puterr(char const *);
int my_putstr(char const *);
char *my_revstr(char *);
char *my_strcat(char *, char const *);
int my_strlen(char const *);
int my_getnbr(char const *);
int factorial(int);
int my_power_rec(int, int);
int my_power_it(int);
int my_square_root(int);
char *my_revstr(char *);
int my_strcmp(char const *, char const *);
char *my_strcpy(char *, char const *);

#endif