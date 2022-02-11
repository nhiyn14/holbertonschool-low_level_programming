#include "main.h"

/**
 * print_hash_line - prints a line of c character size time
 * @size: size of the square
 * @c: character to be printed
 * Description: output:
 * if n = 5
 * #####
 * #####
 * #####
 * #####
 * #####
 */
void print_hash_line(int size, int c)
{
	while (size > 0)
	{
		_putchar(c);
		size--;
	}
}

/**
 * print_square - prints a square \n
 * @size: size of the square
 */
void print_square(int size)
{
	int line = 1;

	while (line <= size)
	{
		print_hash_line(size, '#');
		_putchar('\n');
		line++;
	}
	if (size <= 0)
		_putchar('\n');
}
