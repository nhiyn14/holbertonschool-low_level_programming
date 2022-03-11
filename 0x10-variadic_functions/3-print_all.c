#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
  * print_all -  a function that prints anything \n
  * @format: list of accepted types of arguments passed to the func
  *
  * Return: up to 9 variables
  * if separator == NULL, print nothing
  * if string == NULL,  print (nil)
  * end with \n
  */
void print_all(const char * const format, ...)
{
	va_list type;
	unsigned int i = 0;
	char *str, *separator = "";

	if (format != NULL)
	{
		va_start(type, format); /* first call to check format */
		while (format[i] != '\0')
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(type, int));
					separator = ", ";
					break;
				case 'i':
					printf("%s%i", separator, va_arg(type, int));
					separator = ", ";
					break;
				case 'f':
					printf("%s%f", separator, va_arg(type, double));
					separator = ", ";
					break;
				case 's':
					str = va_arg(type, char *);
					if (str == NULL || *str == '\0')
						str = "(nil)";
					printf("%s%s", separator, str);
					separator = ", ";
					break;
			}
			i++;
		}
		va_end(type);
	}
	printf("\n");
}
