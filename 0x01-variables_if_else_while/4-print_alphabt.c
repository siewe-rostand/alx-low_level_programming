#include <stdio.h>

/**
 * main - alphabet in lowercase
 *
 * Description: alphabet in lowercase without q and e
 *
 * Return: 0 on success
 */

int main(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		if (alp == 'q' || alp == 'e')
		{
			break;
		}

		putchar(alp);
		alp++;
	}
	putchar('\n');

	return (0);
}
