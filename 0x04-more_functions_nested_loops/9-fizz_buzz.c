B#include <stdio.h>
/**
 * main - int main
 * Return: return0
 */
int main(void)
{
	int z;

	for (z = 1; z < 100; z++)
		if (z % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (z % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (z % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", z);
		}
	printf("Buzz");
	printf("\n");
	return (0);
}
