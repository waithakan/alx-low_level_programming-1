#include "main.h"
/**
 * get_bit - return the value of a particular bit.
 *
 * @n: number to be searched for.
 *@index: index of the bit searched for.
 *
 * Return: returns the value of the bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 63)
		return (-1);

	bit = (n >> index) & 1;
	return (bit);
}
