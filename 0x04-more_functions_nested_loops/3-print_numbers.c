#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line.
 *
 *
 * Description: Output:
 * 0123456789
 *
 */
void print_numbers(void)
{
	int a;

	for (a = 0; a < 10; a++)
		_putchar(a + '0');
	_putchar('\n');
}
