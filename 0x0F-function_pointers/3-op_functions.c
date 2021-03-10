#include "3-calc.h"

/**
 * op_add - Op
 * @a: Variable
 * @b: Variable
 * Return: 0
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Op
 * @a: Variable
 * @b: Variable
 * Return: 0
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Op
 * @a: Variable
 * @b: Variable
 * Return: 0
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Op
 * @a: Variable
 * @b: Variable
 * Return: 0
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - Op
 * @a: Variable
 * @b: Variable
 * Return: 0
 */

int op_mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	printf("Error\n");
	exit(100);
}
