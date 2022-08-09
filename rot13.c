#include "main.h"
/**
 * print_R - printf str to ROT13 place into buffer
 * @params: type struct va_arg where is allocated printf arguments
 * Return: counter
 *
 */
int print_R(va_list params)
{
	int i, j, counter = 0;
	int k = 0;
	char *s = va_arg(params, char*);
	char alpha[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char beta[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (!s)
		s = "(null)";
	for (i = 0; s[i]; i++)
	{
		k = 0;
		for (j = 0; alpha[j] && !k; j++)
		{
			if (s[i] == alpha[j])
			{
				_putc(beta[j]);
				counter++;
				k = 1;
			}
		}
		if (!k)
		{
			_putc(s[i]);
			counter++;
		}
	}
	return (counter);
}
