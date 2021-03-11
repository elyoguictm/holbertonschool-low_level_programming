#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Function print
 * @n: n
 * @separator: char separator
 *
 * Return: 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list print;
	int num = 0;
	unsigned int z;

	if (separator == NULL)
		separator = "";

	va_start(print, n);
	for (z = 0; z < n; z++)
	{
		num = va_arg(print, int);
		printf("%d", num);
		if (z != (n - 1))
			printf("%s", separator);
	}
	va_end(print);
	printf("\n");
}
