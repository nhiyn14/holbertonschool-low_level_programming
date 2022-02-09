#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Print the number stored in the variable n is pos or neg.
*
* Description: Output should be the number followed by:
* if the number is greater than 0: is positive
* if the number is 0: is zero
* if the number is less than 0: is negative
*
* Return: 0
*/
void positive_or_negative(int i)
{

	if (i >= 0)
	{
		if (i == 0)
		{
			printf("%d is zero\n", i);
		}
		else
		{
			printf("%d is positive\n", i);
		}
	}
	else
	{
		printf("%d is negative\n", i);
	}

}
