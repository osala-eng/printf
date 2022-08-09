#ifndef _MAIN_H
#define _MAIN_H

#define BUFSIZE MAXLENGTH
#define END '\0'

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <string.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_c(va_list params);
int print_s(va_list params);
int print_p(__attribute__((unused))va_list params);
int print_i(va_list params);
int print_d(va_list params);
int (*get_func(const char a))(va_list);
int print_i(va_list params);
int print_d(va_list params);
int bin_r(unsigned int num, int len);
int print_b(va_list params);
int print_u(va_list params);
int print_o(va_list args);
int rot13(va_list params);
int print_rev(va_list params);

void rev_string(char *s);

/**
 *struct format - structure for printing various types
 *@select: type to print
 *@meth: function to print
 */

typedef struct format
{
	const char select;
	int (*meth)(va_list);
} format_t;

#endif
