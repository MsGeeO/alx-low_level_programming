#include "main.h"

/**
 * _memset - function that fills memory
 * @b: constant byte
 * @s: pointer memory area
 * @n: byte
 * Return: Always 0 (success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
