#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
  * *str_concat - a function that concatenates two strings.
  * @s1: string 1
  * @s2: string 2
  *
  * Description: if s1 = "Best ", s2 = "Pie"
  * Stdout: Best School
  *
  * Return: the wanted array or NULL if fail or size = 0
  */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int sizeS1, sizeS2, sizeCon;
	int i = 0; /*place holder of concat*/
	int a = 0; /*place holder of s2*/

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL && s1 != NULL)
		s2 = "";
	sizeS1 = _strlen(s1);
	sizeS2 = _strlen(s2) + 1; /* +1 to include \0 */
	sizeCon = sizeS1 + sizeS2;
	concat = malloc(sizeCon);
	if (concat == NULL)
		return (NULL);
	for (i = 0; i < sizeS1; i++)
		*(concat + i) = *(s1 + i);
	for (i = sizeS1; i < sizeCon; i++)
	{
		*(concat + i) = *(s2 + a);
		a++;
	}
	return (concat);
}

/**
  * *_strdup- returns a pointer to a newly allocated space in memory,
  * which contains a copy of the string given as a parameter.
  * @str: given string
  *
  * Description: Similar to function strdup
  *
  * Return: if succeed, return pointer to the duplicate of str
  * NULL if str == NULL or insufficient memory was available
  */
char *_strdup(char *str)
{
	char *arrayChar;
	int size; /* +1 for \0 */
	int i = 0; /*place holder of arrayChar*/

	if (str == NULL)
		return (NULL);
	size = _strlen(str) + 1;
	arrayChar = malloc(size);
	if (arrayChar == NULL)
		return (NULL);
	while (i < size)
	{
		*(arrayChar + i) = *(str + i);
		i = i + 1;
	}
	return (arrayChar);
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
int _strlen(char *str)
{
	int count = 0;

	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}
