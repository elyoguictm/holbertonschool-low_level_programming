#include "search_algos.h"

/**
 * array_print - prints an array
 * @array: array to print
 * @start: first to print
 * @end: last to print
 */
void print_array(int *array, size_t start, size_t end)
{
	size_t z;

	printf("Searching in array: ");
	for (z = start; z <= end; z++)
	{
		printf("%d", array[z]);
		if (z < end)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 *
 * @array: pointer to the first element
 * @size: the number of elements in array
 * @value: is the value to search for
 *
 * Return: index of value or (-1) if value does not exist
 */
int binary_search(int *array, size_t size, int value)
{
	size_t z, x, c;

	if (size > 0)
	{
		z = 0;
		x = size - 1;
		print_array(array, z, x);
		while (z <= x)
		{
			c = (z + x) / 2;
			if (array[c] < value)
				z = c + 1;
			else if (array[c] > value)
				x = c - 1;
			else
				return (c);
			if (z <= x)
				print_array(array, z, x);
		}
	}
	return (-1);
}
