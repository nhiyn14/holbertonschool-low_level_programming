#include <stdio.h>
#include "main.h"

/**
 * *rot13 - a function that encodes a string using rot13.
 *
 * @s: pointer to string
 *
 * Description: if  char s = "rotate by 13 places"
 * => stdout: char s = "ebgngr ol 13 cynprf"
 *
 * Return: encode using rot13.
 */
char *rot13(char *s)
{
	int i = 0; /** no. og element for s */
	char *pre = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyx";
	char *post = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int a = 0; /** no. of element for pre + post */

	while (s[i] != '\0')
	{
		for (a = 0; a < 52; a++)
		{
			if (s[i] == pre[a])
			{
				s[i] = post[a];
				break;
			}
		}
		i++;
	}
	return (s);
}
