#include "main.h"

/**
 * is_prime_number - check if n is prime number.
 * @n: number to be checked
 *
 * Description: if n = 5, n = 4
 * stdout = 1, 0
 *
 * Return: if n is prime number return 1
 * otherwise 0
 */
int is_prime_number(int n)
{
	int x = 2;

	if (n <= 1)
		return (0);
	else
		return (_manualProductCheck(x, n));
}

/**
 * _manualProductCheck - manually go thru each natual x^2 to see if match n.
 * @x: number to check against
 * @n: number to be checked
 *
 * Description: if x = 2 and n = 4, x = 1 and n = 3
 * stdout = 0, 1
 * Similar to function sqrt in math.h
 *
 * Return: if x (square root) when x*x = n
 */
int _manualProductCheck(int x, int n)
{
		if (n % x != 0)
		{
			if (x == 13)
				return (1);
			else
				return (_manualProductCheck(x + 1, n));
		}
		else
			return (0);
}
