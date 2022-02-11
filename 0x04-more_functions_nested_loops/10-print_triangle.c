#include "main.h"

/**
 * print_character_line - prints a line of c character size time
 * @size: size of the square
 * @c: character to be printed
 * Description: output:
 * if n = 7
 *        #
 *       ##
 *      ###
 *     ####
 *    #####
 *   ######
 *  #######
 */
void print_character_line(int size, int c)
{
	while (size > 0)
	{
		_putchar(c);
		size--;
	}
}

/**
 * print_triangle - prints a triangle \n
 * @size: height of triangle
 */
void print_triangle(int size)
{
	int space, hash;

	space = size - 1;
	hash = 1;

	if (size > 0)
	{
		while (space >= 0)
		{
			print_character_line(space, ' ');
			print_character_line(hash, '#');
			space--;
			hash++;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
