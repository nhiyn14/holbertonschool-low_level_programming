#include <stdio.h>
#include "main.h"

/**
 * *leet - a function that encodes a string into 1337.
 *
 * @s: pointer to string
 *
 * Description: if  char s = "Capitalize"
 * => stdout: char s = "C4pi741iz3"
 *
 * Return: encode to 1337
 */
char *leet(char *s)
{
	int i = 0;
	char *pre = "aAeEoOtTlL";
	char *post = "4433007711";
	int a = 0;

	while (s[i] != '\0')
	{
		a = 0;
		while (a < 10)
		{
			if (s[i] == pre[a])
				s[i] = post[a];
			a++;
		}
		i++;
	}
	return (s);
}
