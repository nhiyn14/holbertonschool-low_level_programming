#include <unistd.h>
#include "main.h"

/**
* _isalpha -  checks for alphabetic character.
* @c: place holder of letter.
*
* Return: 1 if c is an alphabetic letter
* Returns 0 otherwise
*
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
