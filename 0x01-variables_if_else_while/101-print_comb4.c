#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - prints all possible different combinations of three digits
*
* Description: Output should be
* 012, 013, 014, 015, 016, 017, 018, 019, 023, 024, 025, 026, 027, 028, ...
*
* Return: 0
*/
int main(void)
{
	int a, b, c;

	for (a = '0'; a <= '9'; a++)
	{
		b = a + 1;
		for (b = '1'; b <= '9'; b++)
		{
			c = b + 1;
			for (c = '2'; c <= '9'; c++)
			{
				if (a < b && b < c)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (a != '7')
					{	putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
