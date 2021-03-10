#include "function_pointers.h"

/**
 * int_index - Index
 * @array: Variable
 * @size: Variable
 * @cmp: Function
 * Return: -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int z;

	if (array != NULL && cmp != NULL && size > 0)
	{
		for (z = 0; z < size; z++)
		{
			if (cmp(array[z]) != 0)
				return (z);
		}
	}
	return (-1);
}
