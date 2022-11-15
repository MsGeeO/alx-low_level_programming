#include "main.h"
#include <stdlib.h>

/**
 * object_like_macro.h - creates a header file that defines a macro
 * @size: name of macro
 * @1024: token abbreviation
 * 
 * Return: Always 0
 */
int main(void)
{
#define SIZE 1024
malloc(SIZE)
}
