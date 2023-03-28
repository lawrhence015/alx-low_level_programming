#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: function parameters
 * Return: 0
 */

void print_rev(char *s)
{
	int i;
	int count = 1;

	for (i = 1; s[i] != '\0'; i++)
		count++;
	for (i = count; i >= 1; i--)
		_putchar(s[i]);
	_putchar('\n');
}
