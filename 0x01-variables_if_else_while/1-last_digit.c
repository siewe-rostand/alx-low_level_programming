#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - last digit of a number
 *
 * Description: print last digit of a number
 *
 * Return: >5 (greater than five), 0 (is 0),<6 (less than 6)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 5)
	{
		printf("%d and is greater than 5\n", n);
	}
	else if (n == 0)
	{
		printf("%d and is 0\n", n);
	}
	else
	{
		printf("%d and is less than 6 and not  0\n", n);
	}

	return (0);
}
