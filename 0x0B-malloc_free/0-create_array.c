#include "main.h"

/**
 * create_array - prints a function that creates an array chars
 * @size: number elements array
 * @c: char
 * Return: Pointer
 */

char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int position;

	if (size == 0)
	{
		return (NULL);
	}

	/*Define values with malloc*/
	buffer = (char *) malloc(size * sizeof(c));

	if (buffer == 0)
	{
		return (NULL);
	}

	else
	{
		position = 0;
		while (position < size) /*while for array*/
		{
			*(buffer + position) = c;
			position++;
		}

		return (buffer);
	}
}