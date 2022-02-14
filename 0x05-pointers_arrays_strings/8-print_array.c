#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers /n
 * @a: pointer a (set to int array)
 * @n: number of element
 *
 *
 * Description: if array = 1, 2, 3
 * => Stdout: 1, 2, 3
 *
 * Return: 0
 */
void print_array(int *a, int n)
{
	int b = 0;

	if (n > 0)
	{
		printf("%d", a[0]);
		for (b = 1; b < n && b > 0; b++)
			printf(", %d", a[b]);
	}
	printf("\n");
}
