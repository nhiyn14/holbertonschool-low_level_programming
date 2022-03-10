#include "variadic_functions.h"
#include <stdarg.h>

/**
  * sum_them_all - function that returns the sum of all its parameters
  * @n: number of variables
  *
  * Description: Sum all input parameters
  * Return: if n == 0, return (0)
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list calc;
	unsigned int i = 0;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(calc, n); /* Save arguments in list */
	while (i < n)
	{
		sum = sum + va_arg(calc, const unsigned int);
		i++;
	}
	va_end(calc);
	return (sum);
}
