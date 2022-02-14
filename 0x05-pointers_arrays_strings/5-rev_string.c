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
	int len = _strlen(s);
	int pre = 0;
	int tempo;

	while (pre < len / 2)
	{
		tempo = s[pre];
		s[pre] = s[len - 1 - pre];
		s[len - 1 - pre] = tempo;
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
