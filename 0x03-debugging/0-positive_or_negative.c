#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - check if positive or negative
 *
 *Description:check random number
 *
 * Return: 0 (is zero),>0 (positive),<0 (negative)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}

	return (0);
}
