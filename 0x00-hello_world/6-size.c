#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the size of various types on the computer it is compiled
 *
 * Return: Always return 0 on success
 */

int main(void)
{
	printf("size of char: %d byte(s)\n", (int) sizeof(char));
	printf("size of int: %d byte(s)\n", (int) sizeof(int));
	printf("size of long int: %d bytes(s)\n", (int) sizeof(long int));
	printf("size of long long int: %d byte(s)\n", (int) sizeof(long long int));
	printf("size of float: %d byte(s)\n", (int) sizeof(float));

	return (0);
}
