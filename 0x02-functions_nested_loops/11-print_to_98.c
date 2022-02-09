#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98 \n
 * @n: number to start to print from 98
 *
 * Description: if n = 98, print from 0 to 97
 * if n = 111, print from 110 to 99
 * if n = -10, print from -10 to 97
 *
 * Return: Always 0.
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
		printf("98\n");
	}
	else
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		printf("98\n");
	}
}
