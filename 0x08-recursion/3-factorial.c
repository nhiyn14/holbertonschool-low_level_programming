#include "main.h"

/**
 * factorial - a function that returns the factorial of a given number.
 *
 * @n: given number
 *
 * Description: if n = 5
 * stdout = 120
 *
 * Return: if n >= 0 print factorial of input number
 * if n < 0 print -1 to indicate an error
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	else if (n == 0 || n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
