#include <stdio.h>
/**
  * main - prints from 1 to 100 \n
  *
  * Descrition: multiples of three print Fizz
  * multiples of five print Buzz
  * multiples of both three and five print FizzBuzz.
  * Return: void
  */
int main(void)
{
	int a, b, c;

	for (a = 1; a <= 100; a++)
	{
		b = a % 3;
		c = a % 5;

		if ((b == 0) && (c != 0))
			printf("Fizz");
		else if ((c == 0) && (b != 0))
			printf("Buzz");
		else if ((c == 0) && (b == 0))
			printf("FizzBuzz");
		else
			printf("%i", a);

		if (a < 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
