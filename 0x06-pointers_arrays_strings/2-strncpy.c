#include <stdio.h>
#include "main.h"

/**
 * *_strncpy - a function that copies a string
 * but it will use at most n bytes from src
 *
 * @dest: pointer to dest var/array
 * @src: pointer to src var/array
 * @n: bytes from src
 *
 * Description: if dest = "******", src = "World!\n", n = 5
 * => dest = "World***"
 *
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int start = 0;
	int endSrc = _strlen(src);

	if (n < endSrc)
	{
		while (start < n)
		{
			dest[start] = src[start];
			start++;
		}
	}
	else if (n >= endSrc)
	{
		while (start < endSrc)
		{
			dest[start] = src[start];
			start++;
		}
		dest[start] = '\0';
	}
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
