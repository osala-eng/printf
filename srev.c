#include "main.h"

/**
 * print_r - function that prints a str in reverse
 * @params: type struct va_arg where is allocated printf arguments
 *
 * Return: the string
 */
int print_r(va_list params)
{

	char *s = va_arg(params, char*);
	int i;
	int j = 0;

	if (!s)
		s = "(null)";
	while (s[j] != '\0')
		j++;
	for (i = j - 1; i >= 0; i--)
		_putc(s[i]);
	return (j);
}
