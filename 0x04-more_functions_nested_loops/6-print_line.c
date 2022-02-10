#include "main.h"

/**
 * print_line - draws a straight line \n
 * @n: number of times the character _ should be printed
 * Description: output:
 * if n = 10__________
 *
 */
void print_line(int n)
{
	int a = 0;

	if (n > 0)
	{
		while (a < n)
		{
			_putchar('_');
			a++;
		}
	}
	_putchar('\n');
}
