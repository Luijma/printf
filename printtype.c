#include "holberton.h"

/**
 * print_string - print string passed.
 * @str: string passed.
 * Return: 0 if null, 1 if not.
 */
void _print_string(char *str, int *n)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
		*n++;
	}
}

/**
 * print_char - print char passed.
 * @c: character passed.
 */
void _print_char(char c, int *n)
{
	_putchar(c);
	*n++;
}

/**
 * print_num - print number.
 * @num: number passed.
 * @n: pointer
 */
void _print_num(int num, int *n)
{
	if (num < 0)
	{
		_print_char('_', &n);
	}
	if (num == 0)
	{
		_print_char(num + '0', &n);
	}
	if (num / 10)
	{
		_print_num(num, &n);
	}
	_print_char(num % 10, &n);
}
