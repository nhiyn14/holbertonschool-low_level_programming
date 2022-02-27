#include <stdio.h>
#include "main.h"

/**
 * *_memcpy - function that copies memory area.
 *
 * @dest: where to copy to
 * @src: where to copy from
 * @n: bytes from memory area src to memory area dest
 *
 * Description: Similar to functiob memcpy in stdio.h
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
