#include "variadic_functions.h"

/**
 * print_strings - Print strings
 * @separator: separatoh
 * @n: n
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	char *str;
	unsigned int z;

	if (separator == NULL)
		separator = "";
	va_start(list, n);
	for (z = 0; z < n; z++)
	{
		str = va_arg(list, char*);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (z != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
