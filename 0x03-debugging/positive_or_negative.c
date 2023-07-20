#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * positive_or_negative - check if positive or negative
 *
 *Description:check random number
 *
 * Return: 0 (is zero),>0 (positive),<0 (negative)
 */

int positive_or_negative(void)
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
