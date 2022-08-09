#include "main.h"

/**
 *get_func - function to find a function pointer associated with specifier
 *@a: specifier to find the correct function
 *
 *Return: function pointer
 */

int (*get_func(const char a))(va_list)
{
	unsigned int m = 0;

	format_t options[] = {
		{'c', print_c},
		{'s', print_s},
		{'%', print_p},
		{'i', print_i},
		{'d', print_d},
		{'b', print_b},
		{'u', print_u},
		{'o', print_o},
		{'r', print_rev},
		{'R', rot13},
		{END, NULL}
	};


	for (; options[m].select; m++)
	{
		if (a == options[m].select)
			return (options[m].meth);
	}

	return (NULL);
}
