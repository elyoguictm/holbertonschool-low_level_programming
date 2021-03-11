#include "variadic_functions.h"

/**
 * print_all - Print all
 * @format: format
 */

void print_all(const char * const format, ...)
{
	unsigned int z = 0;
	char *str, *x = "";
	va_list argu;

	va_start(argu, format);
	if (format)
	{
		while (format[z])
		{
			switch (format[z])
			{
			case 'c':
				printf("%s%c", x, va_arg(argu, int));
				break;
			case 'i':
				printf("%s%i", x, va_arg(argu, int));
				break;
			case 'f':
				printf("%s%f", x, va_arg(argu, double));
				break;
			case 's':
				str = va_arg(argu, char *);
				if (!str)
					str = "(nil)";
				printf("%s%s", x, str);
				break;
			default:
				z++;
				continue;
			}
			x = ", ";
			z++;
		}
	}
	printf("\n");
	va_end(argu);
}
