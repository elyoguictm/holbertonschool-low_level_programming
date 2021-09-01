#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * linear_search - linear search for element in array
 * @array: pointer to the first element
 * @size: size of array
 * @value: value to search
 * Return: -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (i);
		}
	}
	return (-1);
}
