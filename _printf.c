#include "holberton.h"
/**
 * _printf - prints string according to a format
 * @format: string with format provided
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int n = 0;
	int i = 0;

	va_start(args, format);
	while (format && format[i])
	{
		if (format[i] != '%')
		{
			_print_char(format[i], &n);
		} else
		{
			i++;
			if (format[i])
			{
				switch (format[i])
				{
					case 's':
						_print_string(va_arg(args, char *), &n);
						break;
					case 'c':
						_print_char(va_arg(args, int), &n);
						break;
					case '%':
						_print_char(format[i], &n);
						break;
					case 'd':
						_print_num(va_arg(args, int), &n);
						break;
					case 'i':
						_print_num(va_arg(args, int), &n);
						break;
				}
			}
		}
		i++;
	}
	return (n);
}
