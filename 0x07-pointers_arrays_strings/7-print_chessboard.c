#include <stdio.h>
#include "main.h"

/**
 * print_chessboard - prints the chessboard.
 *
 * @a: size of chessboard
 *
 * Description: cheesboard size a
 *
 */
void print_chessboard(char (*a)[8])
{
	int i = 0; /**num of row */
	int j = 0; /**num of line */

	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
