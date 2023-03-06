#include "main.h"

/**
 * *_memcpy - memory area 
 * @dest: destination area of the memeory
 * @src: memory area to copy from
 * @n: number of bytes to copy
 * Return: pointer to destination
 */

char *_memcpy(*dest,char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
