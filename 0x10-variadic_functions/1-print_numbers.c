#include "variadic_fuctions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Entry poit
 * @separator: string to be printed between numbers
 * @n: number of integers
 * Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	char *sep;
	unsigned int i;
	va_list list;

	if (separator == NULL || *separator == 0)
		sep = "";
	else
		sep = (char *) separator;
	va_start(list, n);

	if (n > 0)
		printf("%d", va_arg(list, int));
	for (i = 1; i < n; i++)
		printf("%s%d", sep, va_arg(list, int));
	printf("\n");
	va_end(list);
}
