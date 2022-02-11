#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal \n
 * @n: number of times the character \ should be printed
 * Description: output:
 * if n = 8
 * \$
 *  \$
 *   \$
 *    \$
 *     \$
 *      \$
 *       \$
 *        \$
 */

void print_diagonal(int n)
{
	int row;
	int space;

	if (n > 0)
	{
		for (row = 1; row <= n; row++)
		{
			if (row > 1)
			{
				for (space = 1; space < row; space++)
					_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	_putchar('\n');
}
