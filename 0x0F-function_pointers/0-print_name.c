#include "function_pointers.h"

/**
  * print_name - function that prints a name
  * @name: name to be printed
  * @f: function print
  *
  * Description: Using funtion ptr to print a name
  */

void print_name(char *name, void (*f)(char *))
{
	void (*p)(char *);

	p = f;
	if (name != NULL && p != NULL)
		p(name);
}
