#include "main.h"

/**
 * print_p - prints an hexgecimal number.
 * @params: arguments.
 * Return: counter.
 */
int print_p(va_list params)
{
	void *p;
	char *s = "(nil)";
	long int a;
	int b;
	int i;

	p = va_arg(params, void*);
	if (!p)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			_putc(s[i]);
		}
		return (i);
	}

	a = (unsigned long int)p;
	_putc('0');
	_putc('x');
	b = print_h_aux(a);
	return (b + 2);
}
