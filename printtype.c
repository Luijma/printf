#include "holberton.h"

/**
 * _print_string - print string passed.
 * @str: string passed
 * @n: pointer to count
 * Return: 0 if null, 1 if not.
 */
void _print_string(char *str, int *n)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
		*n += 1;
	}
}

/**
 * _print_char - print char passed.
 * @c: character passed.
 * @n: print count
 */
void _print_char(char c, int *n)
{
	_putchar(c);
	*n += 1;
}

/**
 * _print_num - print number.
 * @num: number passed.
 * @n: pointer
 */
void _print_num(int num, int *n)
{
	if (num < 0)
	{
		_print_char('-', n);
		num = -num;
	}
	if (num == 0)
	{
		_print_char('0', n);
	}
	if (num / 10)
	{
		_print_num((num / 10), n);
	}
	_print_char((num % 10) + '0', n);
}
/**
 * HandleFormat - handles format specifier and prints
 * @i: index of format
 * @n: pointer to count
 * @format: format for print
 * @args: list of arguments
 * Return: -1 on fail, 0 on success
 */
int HandleFormat(int i, int *n, const char *format, va_list args)
{
	char *str;

	if (format && format[i])
	{
		switch (format[i])
		{
			case 's':
				str = va_arg(args, char*);
				if (str == NULL)
					str = "(null)";
				_print_string(str, n);
				break;
			case 'c':
				_print_char(va_arg(args, int), n);
				break;
			case '%':
				_print_char(format[i], n);
				break;
			case 'd':
				_print_num(va_arg(args, int), n);
				break;
			case 'i':
				_print_num(va_arg(args, int), n);
				break;
			default:
				if (format[i] != '\0')
				{
					i--;
					_print_char(format[i], n);
					i++;
					_print_char(format[i], n);
				} else
					return (-1);
		}
	} else
	{
		return (-1);
	}
	return (0);
}
