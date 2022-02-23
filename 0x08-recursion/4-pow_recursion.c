#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: base number
 * @y: exponent number
 *
 * Description: if x = -5 and y = 3
 * stdout = -125
 *
 * Return: if y >= print x raised to the power of y
 * if y < 0 print -1 to indicate an error
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
