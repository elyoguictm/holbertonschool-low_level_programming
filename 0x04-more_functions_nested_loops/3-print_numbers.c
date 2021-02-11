#include "holberton.h"

/**
* print_numbers - 0 to 9
* Description: print numbers
*
* Return: 0
*/

void print_numbers(void)
{

	int num;

	for (num = 0; num <= 9; num++)

		_putchar(num + '0');

	_putchar('\n');

}
