#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * c: char
 * i: integer
 * f: float
 * s: char *
 *
 * Return: Always 0.
 */

void print_all(const char * const format, ...);
{
	print_all("ceis", 'B', 3, "stSchool");
	return (0);
}
