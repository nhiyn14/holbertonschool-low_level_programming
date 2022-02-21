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
	int i = 0;

	if (s[i] != '\0')
	{
		while (s[i] != '\0')
		{
			if (s[i] == c)
			{
				s = &s[i];
				break;
			}
			else
				i++;
		}
		return (s);
	}
	else
		return (0);
}
