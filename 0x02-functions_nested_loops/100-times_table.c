#include <stdio.h>
#include "main.h"

/**
 * print_times_table - prints n times tables, starting with 0
 * @n: number
 *
 * Description: if n = 3
 * 0,   0,   0,   0
 * 0,   1,   2,   3
 * 0,   2,   4,   6
 * 0,   3,   6,   9
 *
 * Return: Always 0.
 */
void print_times_table(int n)
{
	int a, b, c;

	if (n > 0 && n < 15)
	{
		for (a = 0; a < (n + 1); a++)
		{
			_putchar('0');
			for (b = 1; b < (n + 1); b++)
			{
				c = a * b;

				_putchar(',');
				_putchar(' ');
				if (c > 9)
				{
					if (c < 100)
					{
						_putchar(' ');
						_putchar((c / 10) + '0');
						_putchar((c % 10) + '0');
					}
					else
					{
						_putchar((((c / 10) / 10) % 10) + '0');
						_putchar(((c / 10) % 10) + '0');
						_putchar((c % 10) + '0');
					}
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((c % 10) + '0');
				}
			}
		_putchar('\n');
		}
	}
}
