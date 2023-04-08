#include "main.h"
/**
 * get_endiannes - checks if a machine is little or big edian
 * Return: 0 for big endiannes
 * 1 for little endiannes
 *
 */
int get_endiannes(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
