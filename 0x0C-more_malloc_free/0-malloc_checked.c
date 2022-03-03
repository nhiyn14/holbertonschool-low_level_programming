#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * malloc_checked - function that allocates memory using malloc
  * @b: size for malloc to allocate
  *
  * Description: Return pinter to allocated memory
  * if fail, function cause termination w a value of 98
  *
  * Return: malloc if success, NULL if fail
  */

void *malloc_checked(unsigned int b)
{
	void *allocMemo = malloc(b);

	if (allocMemo == NULL)
		exit(98);
	return (allocMemo);
}
