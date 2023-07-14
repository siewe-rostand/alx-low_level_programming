#include <stdio.h>

/**
 * main - combinations of two digits
 *
 * Description: prints all possible different combinations of two digits.
 *
 * Return: 0 on success
 */

int main(void)
{
	int i, j, k, m;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = i; k < 10; k++)
			{
				for (m = j + 1; m < 10; m++)
				{
					putchar(48 + i);
					putchar(48 + j);
					putchar(' ');
					putchar(48 + k);
					putchar(48 + m);
					if (i < 9 || j < 8 || k < 9 || m < 8)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
