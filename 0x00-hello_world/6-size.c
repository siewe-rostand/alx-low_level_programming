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
	print("size of int: %d \n", (int) sizeof(int))i;
	print("size of char: %d \n", (int) sizeof(char));
	print("size of float: %d \n", (int) sizeof(float));
	print("size of long int: %d \n", (int) sizeof(long int));
	print("size of long long int: %d \n", (int) sizeof(long long int));

	return (0);
}
