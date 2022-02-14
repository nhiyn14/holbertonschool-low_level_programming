#include <stdio.h>
#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src,
 * to the buffer pointed to by dest.
 *
 * @dest: pointer dest (where to set string from src)
 * @src: hold string to be copied to dest
 *
 *
 * Description: if src = "Hello"
 * => dest = "Hello"
 *
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int b = _strlen(src);

	while (a <= b)
	{
		dest[a] = src[a];
		a++;
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
