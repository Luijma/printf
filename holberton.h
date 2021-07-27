#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

void _print_string(char *str, int *n);
void _print_char(char c, int *n);
void _print_num(int num, int *n);
int _printf(const char *format, ...);
int _putchar(char c);
int HandleFormat(int i, int *n, const char *format, va_list args);

#endif /* _HOLBERTON_H_ */
