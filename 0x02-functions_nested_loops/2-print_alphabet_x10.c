#include <unistd.h>
#include "main.h"

/**
* print_alphabet - writes a string to stdout
*
* Description: Output: abcdefghijklmnopqrstuvwxyz
*
* Return: 0
*
*/
void print_alphabet_x10(void)
{
	char a, b;

	for (b = 1; b <= 10; b++)
	{
		for (a = 'a'; a <= 'z'; a++)
		_putchar(a);
		_putchar('\n');
	}
}
