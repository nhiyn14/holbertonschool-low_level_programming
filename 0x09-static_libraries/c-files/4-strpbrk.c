#include <stdio.h>
#include "main.h"

/**
 * *_strpbrk - searches a string for any of a set of bytes.
 *
 * @s: string to check
 * @accept: string to check against
 *
 * Description: Similar to functiob strpbrk in stdio.h
 *
 * Return:byte in s that matches bytes in accept
 * 0 if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0; /**placeholder of s */
	int j = 0; /**placeholder of accept */

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
			else if (s[i] != accept[j])
				j++;
		}
		i++;
	}
	return (0);
}
