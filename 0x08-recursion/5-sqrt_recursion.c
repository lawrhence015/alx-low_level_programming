#include "main.h"

/**
 * sqrt_a - function
 * @a: number
 * @b: number
 * Return: square root of a
 */
int sqrt_a(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	return (sqrt_a(a, b + 1));
}
/**
 * _sqrt_recursion - print square root of no
 * @n: number to be printed
 * Return: integer
 */

int _sqrt_recursion(int n)
{
	return (sqrt_a(n, 0));
}
