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
 * @left: first string
 * @right: second string
 * @s: string
 * Return: always 0
 */

int compare_string(char *s, int left, int right)
{
	if (*(s + left) == *(s + right))
	{
		if (left == right || left == right + 1)
			return (1);
		return (0 + compare_string(s,  left + 1, right - 1));
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
	return (compare_string(s, 0, _strlen_recursion(s) - 1));
}
