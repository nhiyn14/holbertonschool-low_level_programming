#include <stdio.h>
#include "main.h"

/**
 * _strncat - concatenates two strings
 * but it will use at most n bytes from src
 *
 * @dest: pointer to dest var/array
 * @src: pointer to src var/array
 * @n: bytes from src
 *
 * Description: if dest = "Hello ", src = "World!\n, n = 1
 * => dest = "Hello W"
 *
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int start = _strlen(dest);
	int endSrc = _strlen(src);
	int i = 0;

	if (n <= endSrc)
	{
		while (i < n)
		{
			dest[start] = src[i];
			start++;
			i++;
		}
	}
	else if (n > endSrc)
	{
		while (i < endSrc)
		{
			dest[start] = src[i];
			start++;
			i++;
		}
	}
	dest[start + n] = '\0';
	return (dest);
}

/**
 * _strlen - print length of string
 * @src: hold string to be copied to dest
 * Return: 0
 */
int _strlen(char *src)
{
	int count = 0;

	while (*src != '\0')
	{
		count++;
		src++;
	}
	return (count);
}
