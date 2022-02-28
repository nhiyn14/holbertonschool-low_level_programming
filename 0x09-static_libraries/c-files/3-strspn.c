#include <stdio.h>
#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: string to check
 * @accept: string to check against
 *
 * Description: Similar to functiob strchr in stdio.h
 *
 * Return: number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0; /**placeholder of s */
	int j = 0; /**placeholder of accept */

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				i++;
				break;
			}
			else if (s[i] != accept[j])
				j++;
		}
		if (accept[j] == '\0')
			break;
		j = 0;
	}
	return (i);
}
