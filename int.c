#include "main.h"
/**
 * print_i - prints integer
 * @params: argument to print
 * Return: number of characters printed
 */
int print_i(va_list params)
{
	int n = va_arg(params, int);
	int num, last = n % 10, digit, exp = 1;
	int  i = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putc('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putc(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putc(last + '0');

	return (i);
}

/**
 * print_d - prints decimal
 * @params: argument to print
 * Return: number of characters printed
 */

int print_d(va_list params)
{
	int n = va_arg(params, int);
	int num, last = n % 10, digit;
	int  i = 1;
	int exp = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putc('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putc(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putc(last + '0');

	return (i);
}
