#include "holberton.h"
/**
 * main - test case for printf
 * Return: 0 on success
 */
int main (void)
{
	int n;
	_printf("Simple Sentence\n");
	_printf("Not so simple %s\n", "sentence");
	n = _printf("12345\n");
	printf("%d\n", n);
	n = _printf("123%c\n", '4');
	printf("%d\n", n);
	return (0);
}
