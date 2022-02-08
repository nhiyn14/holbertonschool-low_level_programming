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
void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	_putchar(a);
	_putchar('\n');
}
