#include "main.h"

/**
 * find_sqrt - Helper function to find square root
 * @n: The number to find square root of
 * @i: The current number to test
 *
 * Return:  The square root, or -1 if not found
 */
int find_sqrt(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}
	return (find_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number to find square root of
 *
 * Return: The natural square root, or -1 if n doesn't have one
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (find_sqrt(n, 1));
}
