#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	printf("Size of char is : %d byte\n", sizeof(char));
        printf("Size of int is : %d bytes\n", sizeof(int));
        printf("Size of long int is : %d bytes\n", sizeof(long int));
        printf("Size of long long int is : %d bytes\n", sizeof(long long int));
        printf("Size of float is : %d bytes\n", sizeof(float));
	return (0);
}
