#include "main.h"

/**
 * print_b - prints a binary number.
 * @params: arguments.
 * Return: 1.
 */
int print_b(va_list params)
{
	int flag = 0;
	int cont = 0;
	int i, a = 1, b;
	unsigned int num = va_arg(params, unsigned int);
	unsigned int p;

	for (i = 0; i < 32; i++)
	{
		p = ((a << (31 - i)) & num);
		if (p >> (31 - i))
			flag = 1;
		if (flag)
		{
			b = p >> (31 - i);
			_putc(b + 48);
			cont++;
		}
	}
	if (cont == 0)
	{
		cont++;
		_putc('0');
	}
	return (cont);
}
