#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - prints all different combinations of two digits
*
* Description: Output should be
* 01, 02, 03, 04, 05, 06, 07, 08, 09, 12, 13, 14, ...
*
* Return: 0
*/
int main(void)
{
	int a, b;

	for (a = '0'; a <= '8'; a++)
	{
		b = a;
		for (b = '0'; b <= '9'; b++)
		{
			if (a < b)
			{
				putchar(a);
				putchar(b);
				if (a != '8')
				{	putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
