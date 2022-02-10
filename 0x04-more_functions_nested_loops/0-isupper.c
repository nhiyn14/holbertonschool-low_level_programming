#include "main.h"

/**
 * _isupper - checks for uppercase character.
 * @c: character
 * Description: Output:
 * Return: 1 if c is uppercase, 0 otherwise
 *
 */
int _isupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = 0;
	if (c >= 'A' && c <= 'Z')
		c = 1;
	return (c);
}
