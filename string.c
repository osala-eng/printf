#include "main.h"
/**
 * print_s - print a string.
 * @params: argumen t.
 * Return: the length of the string.
 */

int print_s(va_list params)
{
	char *s;
	int i, len;

	s = va_arg(params, char *);
	if (!s)
	{
		s = "(null)";
		len = _strlen(s);
		for (i = 0; i < len; i++)
			_putc(s[i]);
		return (len);
	}
	else
	{
		len = _strlen(s);
		for (i = 0; i < len; i++)
			_putc(s[i]);
		return (len);
	}
}
