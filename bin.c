#include "main.h"

/**
 * bin_r - numbers in bin in recursive
 * @num: number to print
 * @len: lenght of digit to print
 *
 * Return: length on success, -1 if NULL
 */
int bin_r(unsigned int num, int len)
{
	if (num / 2)
		len = bin_r(num / 2, len + 1);
	_putchar(num % 2 + '0');

	return (len);
}

/**
 * print_b - convert unsigned int to bin
 * @params: int to convert
 *
 * Return: integer
 */
int print_b(va_list params)
{
	int len = 0;
	unsigned int num = va_arg(params, unsigned int);

	len = bin_r(num, len) + 1;
	return (len);
}
