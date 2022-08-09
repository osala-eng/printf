#include "main.h"

/**
 * _printf - is a function that selects the correct function to print.
 * @format: identifier to look for.
 * Return: the length of the string.
 */
int _printf(const char * const format, ...)
{
	format_t opt[] = {
		{"%s", print_s},
		{"%c", print_c},
		{"%%", print_a},
		{"%i", print_i},
		{"%d", print_d},
		{"%r", print_r},
		{"%R", print_R},
		{"%b", print_b},
		{"%u", print_u},
		{"%o", print_o},
		{"%x", print_h},
		{"%X", print_H},
		{"%S", print_S},
		{"%p", print_p}
	};
	va_list params;
	int i = 0, j, len = 0;

	va_start(params, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
RESET:
	while (format[i])
	{
		j = 13;
		while (j >= 0)
		{
			if (opt[j].id[0] == format[i] && opt[j].id[1] == format[i + 1])
			{
				len += opt[j].meth(params);
				i = i + 2;
				goto RESET;
			} j--;
		}
		_putc(format[i]);
		len++;
		i++;
	} va_end(params);
	return (len);
}
