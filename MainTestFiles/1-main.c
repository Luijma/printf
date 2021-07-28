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

    len = _printf("Negative:[%d]\n", -762534);
    len2 = printf("Negative:[%d]\n", -762534);
	_printf("Length[%d, %i]\n", len, len);
	printf("Length[%d, %i]\n", len2, len2);

	
	len = _printf("_printf MAX:%d \n", INT_MAX);
	len2 = printf("printf MAX:%d \n", INT_MAX);
	
	_printf("Length[%d, %i]\n", len, len);
	printf("Length[%d, %i]\n", len2, len2);

	len = _printf("_printf MIN:%d \n", INT_MIN);
	len2 = printf("printf MIN:%d \n", INT_MIN);

	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	return (0);
}
