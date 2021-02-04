#include <stdlib.h>
#include <time.h>

/* more headers goes there */
/* main - main funtion
/* betty style doc for function main goes there */

int main(void)
{
	int n;

	strand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("d% is positive\n"), n;
	}
	else if (n == 0)
	{
		printf("d% is zero\n"), n;
	}
	else (n < 0)
	{
		printf("is negative\n");
	}
	return (0);
}
