#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copy memory area
 * @dest: destination memory area
 * @src: memory area to copy from
 * @n: number of bytes to copy
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;
	
	for (index = 0; index < n; index++)
		dest[index] = src[index];
	return (dest);
}
