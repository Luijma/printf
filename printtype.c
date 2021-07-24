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
		n++;
	}
}

/**
 * print_char - print char passed.
 * @c: character passed.
 * Return: nothing
 */
void _print_char(char c, int *n)
{
	_putchar(c);
	n++;
}
