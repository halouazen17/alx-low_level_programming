#include<stdio.h>
/**
 * main - entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
	printf("Size of char: %d byte(s)\n", sizeof(char));
	printf("Size of an init: %d byte(s)\n", sizeof(init));
	printf("Size of along init: %d byte(s)\n", sizeof(long init));
	printf("Size of a long long init: %d byte(s)\n", sizeof(long long init));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}
