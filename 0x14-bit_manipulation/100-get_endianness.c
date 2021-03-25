#include "holberton.h"

/**
 * get_endianness - Checks the systems Byte order
 * Return: Returns 0 if big endian 1 if little endian
 */

int get_endianness(void)
{
	int z, end;

	z = 1;
	end = (int) (((char *)&z)[0]);
	return (end);
}
