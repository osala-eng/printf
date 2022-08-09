#include "main.h"
/**
 *_printf - function to print anything
 *@format: types of argument passed to the function
 *
 *Return: number of cs printed
 */
int _printf(const char *format, ...)
{
	int check = 0, i;
	va_list params;
	int (*func)(va_list);

	va_start(params, format);
	if (!format)
		return (-1);

	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (!(format[i]))
				return (-1);

			func = get_func(format[i]);
			if (!func)
			{
				_putchar('%');
				_putchar(format[i]);
				check += 2;
			}
			else
				check += func(params);
		}
		else
		{
			_putchar(format[i]);
			check++;
		}
	}
	va_end(params);
	return (check);
}
