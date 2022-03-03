#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * array_range - a function that creates an array of integers
  * @min: min interger
  * @max: max interger
  *
  * Description: Create an array of integers
  *
  * Return: the pointer to the newly created array
  * if min > max, return NULL
  * if malloc fails, return NULL
  */

int *array_range(int min, int max)
{
	int *arrInt;
	int gap; /*between min and max */
	int i; /*place holder of arrInt*/

	if (min > max)
		return (NULL);
	gap = max - min + 1;
	arrInt = malloc(sizeof(int) * gap);
	if (arrInt == NULL)
	{
		free(arrInt);
		return (NULL);
	}
	for (i = min; i < gap; i++)
		*(arrInt + i) = i;
	return (arrInt);
}
