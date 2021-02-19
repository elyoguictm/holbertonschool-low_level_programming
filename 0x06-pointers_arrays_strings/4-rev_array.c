#include "holberton.h"

/**
 * reverse_array - reverses
 * @a: parameter
 * @n: parameter
 * Return: a
 */

void reverse_array(int *a, int n)
{
	int i = 0, f = n - 1;
	int rev;

	while (i < f)
	{
		rev = a[i];
		a[i] = a[f];
		a[f] = rev;
		i++;
		f--;
	}
}
