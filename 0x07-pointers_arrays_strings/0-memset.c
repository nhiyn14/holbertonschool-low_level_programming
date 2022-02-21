#include <stdio.h>
#include "main.h"

/**
 * *_memset - fills memory with a constant byte.
 *
 * @s: source variable
 * @n: bytes of the memory area pointed to by s
 * @b: consant byte b
 *
 * Description: Similar to function memset
 *
 * Return: 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i <= n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
