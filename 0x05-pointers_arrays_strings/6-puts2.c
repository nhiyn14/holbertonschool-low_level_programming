#include "main.h"

/**
 * puts2 - every other character of a string /n
 * @str: pointer str (set to int str)
 *
 *
 * Description: output: int str = "Hello"
 * => Stdout: Hlo
 *
 * Return: 0
 */
void puts2(char *str)
{
	int len = _strlen(str);
	int pre = 0;

	while (pre < len)
	{
		if (pre % 2 == 0)
			_putchar(str[pre]);
		pre++;
	}
	_putchar('\n');
}

/**
 * _strlen - print length of string
 * @str: pointer s
 * Return: 0
 */
int _strlen(char *str)
{
	int count = 0;

	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}
