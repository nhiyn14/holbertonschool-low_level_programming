#include "main.h"

/**
 * puts_half - prints half of a string /n
 * @str: pointer str (set to int str)
 *
 *
 * Description: output: str = "0123456789"
 * => Stdout: 56789
 *
 * Return: 0
 */
void puts_half(char *str)
{
	int len = _strlen(str);
	int pre = len - (len / 2);

	while (pre < len)
	{
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
