#include "main.h"

/**
 * get_func - returns needed function
 * @i: func key
 * Return: Pointer to function
 */
char *(*get_func(char i))(va_list)
{
	int k = 0;

	print keys[] = {
	{'c', print_c},
	{'s', print_s},
	{END, NULL}
	};

	while (keys[k].id)
	{
	if (keys[k].id == i)
	return (keys[k].func);
	k++;
	}
	return (NULL);
}

/**
 * create_buffer - creates buffer to hold string
 * Return: pointer to buffer
 */
char *create_buffer(void)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (!buffer)
	return (NULL);
	return (buffer);
}


/**
 * write_buffer - prints buffer, then frees it and frees va_list
 * @buffer: buffer holding print-ables
 * @len: length of print-able string
 * @params: va_list
 */
void write_buffer(char *buffer, int len, va_list params)
{
	char *buff;

	buff = realloc(buffer, len);
	write(1, buff, len);

	free(buff);
	va_end(params);
}
