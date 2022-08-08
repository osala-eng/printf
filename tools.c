#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _puts - print a string using recursion
 * @s: String to print
 *
 * Return: void
 */

void _puts(char *s)
{
	if (*s == END)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts(s);
}

/**
 * _strlen - return string length
 * @s: string
 * Return: string length
 */

int _strlen(char *s)
{
	if (*s == END)
		return (0);
	s++;
	return (1 + _strlen(s));
}

/**
 * _strcpy - copy string
 * @dest: destination
 * @src: source
 *
 * Return: Character
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = _strlen(src);
	for (i = 0; i <= len; i++)
		dest[i] = src[i];

	return (dest);
}
