#include "main.h"

/**
 * _rev_recursion - prints string in reverse
 * @s: string to be printed
 * Return: Always 0 (success)
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
		_print_rev_recursion(s + 1);
	else
		return;
	_putchar(*s);
}
