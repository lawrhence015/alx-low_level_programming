#include "main.h"

/**
 * rev_string - reverses a string
 * @s: input string
 * Return: string in reverse
 */

void rev_string(char *s)
{
	int i;
	int count = 0;
	char rev = s[0];

	while (s[counter] != '\0')
		counter++;
	for (i = 0; i < counter; i++)
	{
		counter--;
		rev = s[i];
		s[i] = s[counter];
		s[counter] = rev;
	}
}
