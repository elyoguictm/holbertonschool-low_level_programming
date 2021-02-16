#include <stdio.h>

/**
 * print_array - print array
 * @a: pointer to the array
 * @n: number of elements
 *
 */

void print_array(int *a, int n)
{
	int z;

	for (z = 0; z < n; z++)
	{
		if (z == 0)
		{
			printf("%d", a[z]);
		}
		else
		{
			printf(", %d", a[z]);
		}
	}
	putchar('\n');
}
