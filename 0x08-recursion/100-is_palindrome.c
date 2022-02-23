#include "main.h"

/**
 * is_palindrome -  function check if a string is a palindrome
 * @s: string
 *
 * Description: if s = test, s = redder
 * stdout = 0, 1
 *
 * Return: if s (iclude empty) is palindrome return 1
 * otherwise 0
 */
int is_palindrome(char *s)
{
	int count = 0;
	int mid = _strlen(s, count) / 2;
	int mir1 = 0;
	int mir2 = _strlen(s, count) - 1;

	if (*(s + 0) == '\0')
		return (1);
	else if (*(s + 1) == '\0')
		return (0);
	else
		return (_checkMirrorletter(s, mid, mir1, mir2));
}

/**
 * _checkMirrorletter - check mirror letter until reach middle
 * @s: string
 * @mid: middle element (where to stop)
 * @mir1: letter to check from start
 * @mir2: letter to check from end
 *
 * Description: Continue checking the start and end until reach middle
 *
 * Return: if s (iclude empty) is palindrome return 1
 * otherwise 0
 */
int _checkMirrorletter(char *s, int mid, int mir1, int mir2)
{
	if (*(s + mir1) == *(s + mir2))
	{
		if (mir1 != mid)
			return (_checkMirrorletter(s, mid, mir1 + 1, mir2 - 1));
		else
			return (1);
	}
	else
		return (0);
}

/**
 * _strlen - returns the length of a string.
 * @s: pointer s (set to int a)
 * @count: count length of string
 *
 * Description: output: str = Hello
 * _strlen(str) = 5
 *
 * Return: Length
 */
int _strlen(char *s, int count)
{
	if (*s != '\0')
		return (_strlen(s + 1, count + 1));
	else
		return (count);
}
