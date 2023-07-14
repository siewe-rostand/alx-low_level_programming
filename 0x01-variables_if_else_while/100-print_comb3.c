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
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar(48 + i);
			putchar(48 + j);

			if (i < 9 || j < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
