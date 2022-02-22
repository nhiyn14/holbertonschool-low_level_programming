#include <stdio.h>
#include "main.h"

/**
 * *_strstr - a function that locates a substring.
 *
 * @haystack: string to check
 * @needle: string to check against
 *
 * Description: Similar to functiob strstr in stdio.h
 *
 * Return:byte first occurrence of needle in haystack
 * 0 if no such byte is found
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0; /**placeholder of haystack */
	int j = 0; /**placeholder of needle */
	int temp = i;
	int hayLen = _strlen(haystack);
	int neeLen = _strlen(needle);

	if (*needle == '\0')
	{
		return (haystack);
	}
	for (i = 0; i < hayLen; i++)
	{
		temp = i;
		for (j = 0; j < neeLen; j++)
		{
			if (haystack[temp] == needle[j])
			{
				if (j == neeLen - 1)
					return (&haystack[i]);
				temp++;
			}
			else
				break;
		}
	}
	return (0);
}

/**
 * _strlen - returns the length of a string.
 * @s: pointer s (set to int a)
 *
 *
 * Description: output: str = Hello
 * _strlen(str) = 5
 *
 * Return: Length
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
