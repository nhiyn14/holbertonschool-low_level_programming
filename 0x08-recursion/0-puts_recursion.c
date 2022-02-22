#include "main.h"

/**
 * _puts_recursion - a function that prints a string \n
 *
 * @s: source variable
 *
 * Description: Similar to function puts in stdio.h
 *
 */
void _puts_recursion(char *s)
{
	int i = 0;

	_putchar(*(s + i));
	i++;
	if (s[i] != '\0')
	{
		_puts_recursion(s + i);
	}
	else
		_putchar('\n');
}
