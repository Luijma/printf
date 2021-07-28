#include <limits.h>
#include "holberton.h"

int main (void)
{
	int len;
	int len2;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");

	_printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
	len = _printf("Printing numbers: %d\n", -1000);
	_printf("_printf MAX:%d \n", INT_MAX);
	printf("printf MAX:%d \n", INT_MAX);
	_printf("_printf MIN:%d \n", INT_MIN);
	printf("printf MIN:%d \n", INT_MIN);
	
	return (0);
}
