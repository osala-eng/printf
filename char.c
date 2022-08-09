#include "main.h"

/**
 * print_c - prints a char.
 * @params: arguments.
 * Return: 1.
 */
int print_c(va_list params)
{
	char s;

	s = va_arg(params, int);
	_putc(s);
	return (1);
}
