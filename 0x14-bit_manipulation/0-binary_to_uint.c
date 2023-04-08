#include "main.h"
/**
 * binary_to_unit - converts a binary to unsinged integer.
 * @b: string containing the binary namber.
 *
 * Return: returns the converted number.
 */
unsigned int binary_to_unit(const char *b)
{
	int j;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (j = 0; b[j]; j++)
	{
		if (b[j] < '0' || b[j] > '1')
			return (0);
		dec_val = 2 * val + (b[j] - '0');
	}
	return dec_(val);
}
