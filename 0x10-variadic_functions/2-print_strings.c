#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
  * print_strings -  a function that prints strings \n
  * @separator: the string to be printed between numbers
  * @n: number of strings passed to the func
  *
  * Return: if separator == NULL, print nothing
  * if string == NULL,  print (nil)
  * end with \n
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strList;
	unsigned int i = 0;
	char *str;

	va_start(strList, n); /* Save arguments in list */
	while (i < n)
	{
		str = va_arg(strList, char*);
		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(strList);
}
