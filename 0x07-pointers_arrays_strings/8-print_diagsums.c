#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - sum of 2 diagonals of a square matrix of integers.
 *
 * @a: mattrix
 * @size: size of matrix
 *
 * Description: sum of 2 diagonals
 *
 */
void print_diagsums(int *a, int size)
{
	int i = 0; /**num of row */
	int j = size; /**num of element each row */
	int total1 = 0;
	int total2 = 0;
	int element;

	for (i = 0; i < size; i++)
	{		
		element = (size + 1) * i;
		total1 = total1 + *(a + element);
		printf("Total 1 is %d\n", *(a + element));
	}
	for (j = size; j >= 0; j--)
	{
		element = (size - 1) * j;
		total2 = total2 + *(a + element);
		printf("Total 1 is %d\n", *(a + element));
	}
	printf("%d, %d\n", total1, total2);
}
