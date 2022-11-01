#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte
 * @s: pointer destination
 * @b: constant byte
 * @n: bytes
 *
 * Return: new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
