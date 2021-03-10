#include "function_pointers.h"

/**
 * array_iterator - Array
 * @array: Vari
 * @size: Function
 * @action: Function
 * Return: 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int z;

	if (array == NULL || size <= 0 || action == NULL)
		return;

	for (z = 0; z < size; z++)
		action(array[z]);
}
