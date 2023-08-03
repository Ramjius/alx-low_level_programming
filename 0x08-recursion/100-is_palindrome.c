#include "main.h"

int tester(char *s, int x, int y);
int length_of_string(char *s);

/**
* length_of_string - returns string length
* @s: string input
* Return: string length
*/

int length_of_string(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + length_of_string(s + 1));
}

/**
* tester - checks string characters
* @s: string
* @x: small iterator
* @y: big iterator
* Return: .
*/

int tester(char *s, int x, int y)
{
	if (*(s + x) == *(s + y))
	{
	if (x == y || x == y + 1)
		return (1);
	return (0 + tester(s, x + 1, y - 1));
	}
	return (0);
}

/**
* is_palindrome - checks for palindrome
* @s: string
* Return: 1 if s is a palindrome and 0 if not
*/

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (tester(s, 0, length_of_string(s) - 1));
}
