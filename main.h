#ifndef MAIN_H
#define MAIN_H

#define END '\0'

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>



/**
 * struct format - struct
 * @id: operation selector
 * @meth: method
 */

typedef struct format
{
	char *id;
	int (*meth)();
} format_t;

int print_p(va_list params);
int print_S(va_list params);
int print_H(va_list params);
int print_h(va_list params);
int print_o(va_list params);
int print_u(va_list params);
int print_b(va_list params);
int print_r(va_list params);
int print_R(va_list params);
int print_i(va_list params);
int print_d(va_list params);
int print_c(va_list params);
int print_s(va_list params);
int print_a(void);
int print_h_aux(unsigned long int num);
int print_H_aux(unsigned int num);
int _strlen(char *s);
int _strlenc(const char *s);
int _putc(char c);
int _printf(const char *format, ...);
int rev_string(char *s);
int *_strcpy(char *dest, char *src);

#endif
