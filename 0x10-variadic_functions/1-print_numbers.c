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
	char *separator;
	va_list numbers;
	unsigned int i;

	if (separator == NULL)
	{
		separator = "";
	}

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers, int));
		if (n == i + 1)
		{
			break;
		}
		printf("%s", separator);
	}
	printf("\n");
	va_end(numbers);
}
