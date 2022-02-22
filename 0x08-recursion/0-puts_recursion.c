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
	if (*s == '\0')
		_putchar('\n');
	
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
		
}
