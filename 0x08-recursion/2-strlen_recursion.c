#include "main.h"

/**
 * _strlen_recursion - function tha print the length of a string
 *
 * @s: pointer to the string to be printed
 *
 * Return: always 0
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
