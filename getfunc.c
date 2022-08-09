#include "main.h"

/**
 * get_func - returns needed function
 * @i: identifier for function
 * Return: Pointer to needed function
 */
char *(*get_func(char *i))(va_list)
{
	int k = 0;
	format_t opt[] = {
		{"s", print_s},
		{"c", print_c},
		{"%", print_a},
		{"i", print_i},
		{"d", print_d},
		{"r", print_r},
		{"R", print_R},
		{"b", print_b},
		{"u", print_u},
		{"o", print_o},
		{"x", print_h},
		{"X", print_H},
		{"S", print_S},
		{"p", print_p},
		{NULL, NULL}
	};

	while (options[k].id)
	{
		if (*(options[k].id) == *i)
			return (options[k].meth);
		k++;
	}
	return (NULL);
}
