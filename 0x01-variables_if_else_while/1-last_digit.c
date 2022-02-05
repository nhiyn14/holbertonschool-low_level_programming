#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Print the last digit of number stored in the variable.
*
* Description: Output should be
* Last digit of n is lastdigit and is >5 / <6 / =0
*
* Return: 0
*/
int main(void)
{
	int n, l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;
	if (l < 6)
	{
		if (l == 0)
		{
			printf("Last digit of %d is %d and is 0\n", n, l);
		}
		else
		{
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
		}
	}
	else
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, l);
	}

	return (0);
}
