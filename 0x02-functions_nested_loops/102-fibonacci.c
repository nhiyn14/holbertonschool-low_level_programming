#include <stdio.h>
#include <stdlib.h>

/**
  * main - prints the first 50 Fibonacci numbers, starting with 1 and 2 \n
  * Return: 0
  */
int main(void)
{
	double a = 1;
	double b = 2;
	double c = 0;

	printf("%.0f, %.0f, ", a, b);
	while (c < 48)
	{
		a = a + b;
		printf("%.0f", a);
		if (c < 47)
		printf(", ");
		c++;
		b = a + b;
		printf("%.0f", b);
		if (c < 47)
		printf(", ");
		c++;
	}
	printf("\n");
	return (0);
}
