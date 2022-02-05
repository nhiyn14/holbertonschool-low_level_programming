#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - prints all the numbers of base 16 in lowercase
*
* Description: Output should be
* 0123456789abcdef
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
