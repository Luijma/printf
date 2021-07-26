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
			if (HandleFormat(i, &n, format, args) == -1)
				return (-1);
		}
		i++;
	}
	va_end(args);
	return (n);
}
