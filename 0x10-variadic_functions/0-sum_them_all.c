#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Funct
 * @n: n
 *
 * Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list argu;
	int sum = 0;
	unsigned int z;

	if (n == 0)
	{
		return (0);
	}
	va_start(argu, n);
	for (z = 0; z < n; z++)
	{
		sum += va_arg(argu, int);
	}
	va_end(argu);
	return (sum);
}
