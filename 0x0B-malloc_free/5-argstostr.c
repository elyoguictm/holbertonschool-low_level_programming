#include <stdlib.h>
#include "holberton.h"

/**
 * argstostr - cat args
 * @ac: ac
 * @av: av
 * Return: p
 */

char *argstostr(int ac, char **av)
{
	int z, x, c, v;
	char *p;

	if (ac == 0)
		return (NULL);
	if (av == NULL)
		return (NULL);

	z = x = c = v = 0;
	for (z = 0; av[z]; z++)
	{
		for (x = 0; av[z][x]; x++)
			c++;
	}
	p = (char *)malloc(c * (sizeof(char)) + ac + 1);
	if (p == NULL)
		return (NULL);
	for (z = 0; av[z]; z++)
	{
		for (x = 0; av[z][x]; x++, v++)
			p[v] = av[z][x];
		p[v] = '\n';
		v++;
	}
	p[v] = '\0';
	return (p);
}
