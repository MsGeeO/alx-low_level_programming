#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input
 * Return: Always 0 (success)
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (squareroot(n, (n + 1) / 2));
}
