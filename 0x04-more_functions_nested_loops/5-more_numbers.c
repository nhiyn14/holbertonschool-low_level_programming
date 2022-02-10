#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14 \n
 *
 * Description: output:
 * 01234567891011121314 (x14)
 *
 */
void more_numbers(void)
{
	int a, b, c, d;

	for (a = 0; a <= 14; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			d = b % 10;
			if (b > 9)
			{
				c = b / 10;
				_putchar(c + '0');
			}
			_putchar(d + '0');
		}
		_putchar('\n');
	}
}
