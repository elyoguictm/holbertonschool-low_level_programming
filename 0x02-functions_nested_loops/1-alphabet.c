#include "holberton.h"

/**
 *print_alphabet 
 *
 *return: void
 */

void print_alphabet(void)
{
	int a;

	a='a';
	while(a<='z')
	{
		_putchar(a++);
	}
	_putchar(10);
	
	return(0);
