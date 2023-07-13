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
	printf("size of int: %d \n", (int) sizeof(int));
	printf("size of char: %d \n", (int) sizeof(char));
	printf("size of float: %d \n", (int) sizeof(float));
	printf("size of long int: %d \n", (int) sizeof(long int));
	printf("size of long long int: %d \n", (int) sizeof(long long int));

	return (0);
}
