#include "main.h"

/**
 * _strlen_recursion - print a string length
 * @s: pointer
 * Return: 0
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));

}

/**
 * compare_string - compare 2 strings
 * @a: first string
 * @b: second string
 * @s: string
 * Return: always 0
 */

int compare_string(char *s, int a, int b)
{
	if (*(s + a) == *(s + b))
	{
		if (a == b || a == b + 1)
			return (1);
		return (0 + compare_string(s,  a + 1, b + 1));
	}
	return (0);
}
/**
 * is_palindrome - function
 * @s: string
 * Return: compare strings
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (compare_string(s, 0, _strlen_recursion((s) - 1)));
}
