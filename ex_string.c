#include "main.h"
/**
 * print_S - print exclusuives string.
 * @params: argumen t.
 * Return: the length of the string.
 */

int print_S(va_list params)
{
	char *s;
	int i, len = 0;
	int cast;

	s = va_arg(params, char *);
	if (!s)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			_putc('\\');
			_putc('x');
			len = len + 2;
			cast = s[i];
			if (cast < 16)
			{
				_putc('0');
				len++;
			}
			len = len + print_H_aux(cast);
		}
		else
		{
			_putc(s[i]);
			len++;
		}
	}
	return (len);
}
