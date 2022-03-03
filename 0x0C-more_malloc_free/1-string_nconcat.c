#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * *string_nconcat - function that concatenates two strings
  * @s1: string 1
  * @s2: string 2
  * @n: bytes of s2
  *
  * Description: Concate s1 and n bytes of s2
  *
  * Return: concat if success, NULL if fail
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int s1ze, s2ze;
	unsigned int i = 0; /*place holder of concat*/
	unsigned int a = 0; /*place holder of s2*/

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s1ze = _strlen(s1);
	s2ze = _strlen(s2) + 1;
	if (n >= s2ze)
		concat = malloc(sizeof(s1ze + s2ze));
	else
		concat = malloc(sizeof(s1ze + n));
	if (concat == NULL)
	{
		free(concat);
		return (NULL);
	}
	for (i = 0; i < s1ze; i++)
		*(concat + i) = *(s1 + i);
	if (n >= s2ze)
	{
		for (i = s1ze; i < s2ze; i++)
		{
			*(concat + i) = *(s2 + a);
			a++;
		}
	}
	else
	{
		for (i = s1ze; i < (s1ze + n); i++)
		{
			*(concat + i) = *(s2 + a);
			a++;
		}
	}
	return (concat);
}

/**
 * _strlen - returns the length of a string.
 * @str: pointer s (set to int a)
 *
 *
 * Description: output: str = Hello
 * _strlen(str) = 5
 *
 * Return: Length
 */
unsigned int _strlen(char *str)
{
	unsigned int count = 0;

	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}
