#include <stdio.h>
#include "main.h"

/**
 * *_strchr - locates a character in a string
 *
 * @s: string to check
 * @c: character to locate
 *
 * Description: Similar to functiob strchr in stdio.h
 *
 * Return: 0 if no match, s if match
 */
char *_strchr(char *s, char c)
{
	do
	{
		if (*s == c)
			return (s);
	}
	while (*s++);
	return (0);
}
