#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer s (set to int str)
 *
 *
 * Description: output: int str = "Hello"
 * => Stdout: olleH
 *
 * Return: 0
 */
void rev_string(char *s)
{
	int pre = 0;
	int post = _strlen(s) - 1;

	while (s[pre] != '\0')
	{
		s[pre] = s[post];
		post--;
		pre++;
	}
}

/**
 * _strlen - print length of string
 * @s: pointer s
 * Return: 0
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
