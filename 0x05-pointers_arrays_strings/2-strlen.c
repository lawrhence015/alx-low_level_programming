#include "main.h"

/**
 * _strlen - function to count length of string
 *
 * @s: parameter to be counted
 *
 * Return: 0
 */

int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;

	}
	return (count);
}
