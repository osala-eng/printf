#include "main.h"

/**
 * print_H - prints an hexgecimal number.
 * @params: arguments.
 * Return: j.
 */
int print_H(va_list params)
{
	int i, *array, j = 0;
	unsigned int num = va_arg(params, unsigned int);
	unsigned int temp = num;

	while (num / 16)
	{
		num /= 16;
		j++;
	}
	j++;
	array = malloc(j * sizeof(int));

	for (i = 0; i < j; i++)
	{
		array[i] = temp % 16;
		temp /= 16;
	}
	for (i = j - 1; i >= 0; i--)
	{
		if (array[i] > 9)
			array[i] = array[i] + 7;
		_putc(array[i] + '0');
	}
	free(array);
	return (j);
}
