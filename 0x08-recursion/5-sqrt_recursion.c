#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: factor number
 *
 * Description: if n = 5
 * stdout = 5
 * Similar to function sqrt in math.h
 *
 * Return: if n doesn't have a natural square root print -1
 * if n have then print its natural square root
 */
int _sqrt_recursion(int n)
{
	int x = 0;

	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else
		return (_manualSquareCheck(x, n));
}

/**
 * _manualSquareCheck - manually go thru each natual x^2 to see if match n.
 * @x: base number
 * @n: factor number
 *
 * Description: if x = 2 and y = 4
 * stdout = 2
 * Similar to function sqrt in math.h
 *
 * Return: if x (square root) when x*x = n
 */
int _manualSquareCheck(int x, int n)
{
	if ((x * x) == n)
		return (x);
	else if ((x * x) < n)
		return (_manualSquareCheck(x + 1, n));
	else
		return (-1);
}
