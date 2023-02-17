#include <stdio.h>
/**
 * main - is the main function
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
	int a;

	double b;

	char c;

	printf("The size of int is:%lu.\n", (unsigned long)sizeof(a));
	printf("The size of double is:%lu.\n", (unsigned long)sizeof(b));
	printf("The size of char is:%lu.\n", (unsigned long)sizeof(c));
	return (0);
}
