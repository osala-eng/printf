#include "main.h"

/**
 * print_c - handle char as string
 * @params: char
 * Return: String verion of char
 */
char *print_c(va_list params)
{
	char *s, c;

	c = va_arg(params, int);

	if (!c)
		c = END;

	s = malloc(sizeof(char) * 2);
	if (!s)
		return (NULL);
	s[0] = c;
	s[1] = END;

	return (s);
}

/**
 * print_s - handle printing a string
 * @params: params
 * Return: string
 */

char *print_s(va_list params)
{
	char *s, *p;
	int len;

	s = va_arg(params, char *);
	if (!s)
		s = "(null)";

	len = _strlen(s);

	p = malloc(sizeof(char) * len++);
	if (!p)
		return (NULL);

	return (_strcpy(p, s));
}
