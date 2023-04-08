#include "main.h"

/**
 * set_bit -  sets a bit - sets a bit to 1.
 * @n: pointts to the number to be cagnged.
 * @index: index of the bit to be set to 1.
 * Return: returns 1 if success -1 if failed.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
