#include "main.h"

/**
 * flip_bits - flips bit to 0 if 1 and 1 if 0
 * @n: first number
 * @m: second number
 *
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (j = 63; j >= 0; j--)
	{
		current = exclusive = >> j;
		if (current & 1)
			count++;
