#include "holberton.h"

/**
 * *cap_string - CapWords
 *
 * @str: point
 *
 * Return: str
 */
char *cap_string(char *str)
{
	char sep[] = ",\t;\n; .!?\"(){}";
	int flag, z, x;

	for (i = 0; str[z] != '\0'; z++)
	{
		flag = 0;
		if (z == 0)
		{
			flag = 1;
		}
		else
		{
			for (x = 0; sep[x] != '\0'; x++)
			{
				if (str[z - 1] == sep[x])
				{
					flag = 1;
					break;
				}
			}
		}
		if (flag == 1)
		{
			if (str[z] <= 'z' && str[z] >= 'a')
			{
				str[z] -= ('a' - 'A');
			}
		}
	}
	return (str);
}
