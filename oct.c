#include "main.h"

/**
 * print_o - prints an octal number.
 * @params: arguments.
 * Return: counter.
 */
int print_o(va_list params)
{
	int i;
	int *array;
	int counter = 0;
	unsigned int num = va_arg(params, unsigned int);
	unsigned int temp = num;

	while (num / 8 != 0)
	{
		num /= 8;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));

	for (i = 0; i < counter; i++)
	{
		array[i] = temp % 8;
		temp /= 8;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		_putc(array[i] + '0');
	}
	free(array);
	return (counter);
}
