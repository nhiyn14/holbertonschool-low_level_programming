#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - prints all single digit numbers of base 10 starting from 0 /n
*
* Description: Output should be
* 0123456789
*
* Return: 0
*/
int main(void)
{
	char a;

	for (a = '0'; a <= '9'; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
