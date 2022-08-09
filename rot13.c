#include "main.h"

/**
 * rot13 - convert ROT13 to text
 * @params: argument
 *
 * Return: number of cs to be print
 */

int rot13(va_list params)
{
	char ch[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char chs[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	unsigned int i = 0, j = 0;
	int s;
	char *str;

	s = 0;
	str = va_arg(params, char *);
	if (!str)
		str = "(NULL)";
	for (i = 0; str[i] != END; i++)
	{
		for (j = 0; ch[j] != END; j++)
		{
			if (ch[j] == str[i])
			{
				_putchar(chs[j]);
				s++;
				break;
			}
		}
		if (ch[j] == END)
		{
			_putchar(str[i]);
			s++;
		}
	}
	return (s);
}
