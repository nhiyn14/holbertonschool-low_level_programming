#include "main.h"

/**
 * _puts - prints a string \n to stdout.
 * @str: pointer string str (set to int str)
 *
 *
 * Description: output: str = "Hello"
 * _puts(str) => Stdout: Hello
 *
 * Return: 0
 */
void _puts(char *str)
{
	int a;
	int location = 0;

	while (str[location] != '\0')
	{
		a = str[location];
		location++;
		_putchar(a);
	}
	_putchar('\n');
}
