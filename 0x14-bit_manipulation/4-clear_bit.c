#include "main.h"
/**
 * clear_bit - sets the value of the bit to 0
 * @n: points to the number to be changed
 * @index: index of the bit to be
 * set to 0
 *
 * Return: 1 for succes -1 if failed.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
