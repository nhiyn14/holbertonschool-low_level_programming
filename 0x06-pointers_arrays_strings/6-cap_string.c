#include <stdio.h>
#include "main.h"

/**
 * *cap_string - capitalizes all words of a string.
 *
 * @s: pointer to srting
 *
 * Description: if  char s = "Look Up"
 * => stdout: char s = "LOOK UP"
 *
 * Return: Swap lowercase to uppercase
 */
char *cap_string(char *s)
{
	int i = 1;

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] = s[0] - 32;
	while (s[i] != '\0')
	{
		while (ifSeparators(s[i]) == 1)
		{
			i++;
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] = s[i] - 32;
		}
		i++;
	}
	return (s);

}

/**
 * ifSeparators - function to check if s[i] match
 * space, tabulation, new line, ,, ;, ., !, ?, ", (, ), {, and }
 *
 * @s: string to be checked
 * Return: 1 if match, else 0
 */
int ifSeparators(char s)
{
	int i = 0;
	int sepa[13] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};

	while (i <= 13)
	{
		if (s == sepa[i])
			return (1);
		i++;
	}
	return (0);
}
