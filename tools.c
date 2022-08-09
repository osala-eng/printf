#include "main.h"
/**
 * print_rev - print in reverse
 * @params: parameter
 *
 * Return: len
 */

int print_rev(va_list params)
{
	int count, len;
	char *str = va_arg(params, char *);

	if (!str)
		str = ")llun(";

	len = strlen(str) - 1;

	for (count = len; str[count]; count--)
		_putchar(str[count]);

	return (len);
}
