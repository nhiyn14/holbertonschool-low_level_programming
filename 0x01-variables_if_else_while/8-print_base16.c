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
	char a;

	for (a = '0'; a <= '9'; a++)
		putchar(a);
	for (a = 'a'; a <= 'f'; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
