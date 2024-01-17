#include "main.h"

/**
 * prime_a - prime number
 * @a: number
 * @b: number
 * Return: always 0
 */

int prime_a(int a, int b)
{
	if ((a <= 1) || ((a != b) && (a % b == 0)))
	{
		return (0);
	}
	else if (a == b)
	{
		return (1);
	}
	return (prime_a(a, b + 1));
}

/**
 * is_prime_number - print a prime number
 * @n: number to be printed
 * Return: prime number
 */
int is_prime_number(int n)
{
	return (prime_a(n, 2));

}
