#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
  * print_numbers -  a function that prints numbers \n
  * @separator: the string to be printed between numbers
  * @n: number of integers passed to the func
  *
  * Return: if separator == NULL, return (0)
  * else print n with separator in between, end with \n
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i = 0;

	va_start(list, n); /* Save arguments in list */
	while (i < n)
	{
		printf("%i", va_arg(list, unsigned int));
		if (i != (n - 1))
		{
			if (separator != NULL)
				printf("%s", separator);
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
