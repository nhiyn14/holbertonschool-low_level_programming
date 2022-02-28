#include <stdio.h>
#include "main.h"

/**
 * _strcmp - a function that compares two strings.
 *
 * @s1: pointer to s1 (1st compare var)
 * @s2: pointer to s2 (2nd compare var)
 *
 * Description: if s1[] = "Hello", s2[] = "World!";
 * => _strcmp(s1, s2)) == -15
 * => _strcmp(s2, s1)) == 15
 * => _strcmp(s1, s1)) == 0
 *
 * Return: comparison result
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int lenS1 = _strlen(s1);
	int lenS2 = _strlen(s2);

	if (lenS1 == lenS2)
	{
		return (0);
	}
	else
	{
		while (s1[i] == s2[i])
			i++;
		return (s1[i] - s2[i]);
	}
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
