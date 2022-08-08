#include "main.h"

/**
 * check_buffer_overflow - if writing over buffer space,
 * print everything then revert length back to 0 to write at buffer start
 * @buffer: buffer holding string to print
 * @len: position in buffer
 * Return: length position
 */
int check_buffer_overflow(char *buffer, int len)
{
	if (len > 1020)
	{
		write(1, buffer, len);
		len = 0;
	}
	return (len);
}

/**
 * _printf - mini printf version
 * @format: initial string with all identifiers
 * Return: strings with identifiers expanded
 */
int _printf(const char *format, ...)
{
	va_list params;
	int len = 0;
	int totol_len = 0;
	int i = 0;
	int j = 0;
	char *buffer, *str;
	char *(*f)(va_list);

	if (!format)
		RET_ERR;

	buffer = create_buffer();
	if (!buffer)
		RET_ERR;

	va_start(params, format);

	while (format[i])
	{
		if (format[i] != '%')
		{
			len = check_buffer_overflow(buffer, len);
			buffer[len++] = format[i++];
			total_len++;
		}

		else
		{
			i++;
			if (format[i] == END)
				goto KILL;
			if (format[i] == '%')
			{
				len = check_buffer_overflow(buffer, len);
				buffer[len++] = format[i];
				total_len++
			}
			else
			{
				f = get_func(format[i]);
				if (!f)
				{
					len = check_buffer_overflow(buffer, len);
					buffer[len++] = '%';
					total_len++;
					buffer[len++] = format[i];
					total_len++;
				}
				else
				{
					str = f(params);
					if (!str)
						goto KILL;

					if (format[i] == 'c' && !str[0])
					{
						len = check_buffer_overflow(buffer, len);
						buffer[len++] = END;
						total_len++;
					}
					j = 0;
					while (str[j])
					{
						len = check_buffer_overflow(buffer, len);
						buffer[len++] = str[j];
						total_len++;
						j++;
					}
					free(str);
				}
			}
			i++;
		}
	}

	write_buffer(buffer, len, params);
	return(total_len);

KILL:	va_end(params);
	free(buffer);
	RET_ERR;
}


