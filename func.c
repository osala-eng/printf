#include "main.h"

/**
 *print_c - function to print c
 *@params: cs to print
 *
 *Return: number of c or -1
 */
int print_c(va_list params)
{
	char c = va_arg(params, int);

	return (_putchar(c));
}

/**
 *print_s - function to print string
 *@params: string to print
 *
 *Return: number of cs to print
 */
int print_s(va_list params)
{
	int count;
	char *str = va_arg(params, char *);

	if (!str)
		str = "(null)";
	for (count = 0; str[count]; count++)
		_putchar(str[count]);

	return (count);
}

/**
 *print_p - function to print %
 *@params: unused
 *
 *Return: always 1
 */

int print_p(__attribute__((unused))va_list params)
{
	char c = '%';

	_putchar(c);

	return (1);
}


/**
 * print_i - prints an integer
 * @params: integer to print
 *
 * Return: number of chars and digits printed
 */

int print_i(va_list params)
{
	int x[10];
	int f, d, t, y, i;

	t = va_arg(params, int);
	i = 0;
	d = 1000000000;
	x[0] = t / d;

	for (f = 1; f < 10; f++)
	{
		d /= 10;
		x[f] = (t / d) % 10;
	}

	if (t < 0)
	{
		_putchar('-');
		i++;
		for (f = 0; f < 10; f++)
			x[f] *= -1;
	}

	for (f = 0, y = 0; f < 10; f++)
	{
		y += x[f];
		if (y != 0 || f == 9)
		{
			_putchar('0' + x[f]);
			i++;
		}
	}

	return (i);
}

/**
 *print_d - print a decimal
 *@params: decimal to print
 *
 *Return: number of cs and digits printed
 */

int print_d(va_list params)
{
	int x[10];
	int f, d, t, y, i;

	t = va_arg(params, int);
	i = 0;
	d = 1000000000;
	x[0] = t / d;

	for (f = 1; f < 10; f++)
	{
		d /= 10;
		x[f] = (t / d) % 10;
	}

	if (t < 0)
	{
		_putchar('-');
		i++;
		for (f = 0; f < 10; f++)
			x[f] *= -1;
	}

	for (f = 0, y = 0; f < 10; f++)
	{
		y += x[f];
		if (y != 0 || f == 9)
		{
			_putchar('0' + x[f]);
			i++;
		}
	}

	return (i);
}
