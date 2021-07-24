#include "holberton.h"
/**
 * _printf - prints string according to a format
 * @format: string with format provided
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_ist args;
	int n = 0;
	int i = 0;

	va_start(args, format);
	while (format && format[i])
	{
		if (format[i] != %)
		{
			printchar(char format[i], &n);
		} else
		{
			i++;
			if (format[i])
			{
				switch (format[i])
				{
					case 's':
						printstring(va_arg args, &n);
						break;
					case 'c':
						printchar(va_arg args, &n);
						break;
					case '%':
						printchar('%', &n);
						break;
				}
			}
		}
		i++;
	}
	return (n);
}
