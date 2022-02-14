#include "main.h"

/**
 * print_rev - prints a string, in reverse \n
 * @s: pointer s (set to int str)
 *
 *
 * Description: output: str = "Hello"
 * => Stdout: Hello
 *
 * Return: 0
 */
void print_rev(char *s)
{
	int a;
	int location = _strlen(s) - 1;

	while (s[location] != '\0')
	{
		a = s[location];
		location--;
		_putchar(a);
	}
	_putchar('\n');
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
