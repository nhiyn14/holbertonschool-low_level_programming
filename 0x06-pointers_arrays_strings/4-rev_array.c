#include <stdio.h>
#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 *
 * @a: pointer to a (array to be reversed)
 * @n: number of elements to swap
 *
 * Description: if  int a[] = {0, 1, 2, 3, 4}
 * => reverse_array(int *a, 5);
 * => stdout: 4, 3, 2, 1, 0
 *
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int temp;
	int i = 0;

	while (i < (n - 1))
	{
		temp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = temp;
		i++;
		n--;
	}

}
