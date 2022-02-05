#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - prints all single-digit numbers separated by ,
*
* Description: Output should be
* 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
*
* Return: 0
*/
int main(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
		if (a < '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
