#include <stdio.h>
#include "lists.h"

/**
  * print_first - function to print a string before str in main
  */
void print_first(void) __attribute__ ((constructor));

void print_first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
