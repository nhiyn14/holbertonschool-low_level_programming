#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - prints the alphabet in lowercase except q and e
*
* Description: Output should be
* abcdfghijklmnoprstuvwxyz
*
* Return: 0
*/
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a != 'e' && a != 'q')
			putchar(a);

	}
	putchar('\n');
	return (0);
}
