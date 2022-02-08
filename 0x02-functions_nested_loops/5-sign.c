#include "main.h"

/**
* print_sign - print to stdout either +, - or /.
* @n: place holder for number
*
* Return: Always 0.
*/
int print_sign(int n)
{
	if (n >= 0)
	{
		if (n > 0)
		{
			_putchar('+');
			return (1);
		}
		else
		{
			_putchar('0');
			return (0);
		}
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
