#include "main.h"

/**
 * print_u - prints an unsigned int number
 * @params: argument
 *
 * Return: number of cs printed
 */
int print_u(va_list params)
{
	int i = 0;
	unsigned int num = va_arg(params, unsigned int);
	int j = 1;

	while (num / j > 9)
	{
		j *= 10;
	}

	while (j > 0)
	{
		_putchar(num / j + '0');
		i++;
		num %= j;
		j /= 10;
	}
	return (i);
}
