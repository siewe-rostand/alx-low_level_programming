#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * positive_or_negative - check if positive or negative@siewe-rostand
 *
 * @n: param
 *
 *Description:check random number
 *
 * Return: 0 (is zero),>0 (positive),<0 (negative)
 */

void positive_or_negative(int n)
{
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
}
