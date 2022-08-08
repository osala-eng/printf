#ifndef _MAIN_H
#define _MAIN_H

#define END '\0'
#define RET_ERR (return (-1))

#include <unistd.h>
#include <stdarg.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * _puts - print a string using recursion
 * @s: String to print
 *
 * Return: void
 */

void _puts(char *s);

/**
 * _printf - printf function
 * @format: directives
 *
 * Return: Always 0 (Success)
 */
int _printf(const char *format, ...);

/**
 * print_c - handle char as string
 * @params: char
 * Return: String verion of char
 */
char *print_c(va_list params);

/**
 * print_s - handle printing a string
 * @params: params
 * Return: string
 */

char *print_s(va_list params);

/**
 * _strlen - return string length
 * @s: string
 * Return: string length
 */

int _strlen(char *s);

/**
 * _strcpy - copy string
 * @dest: destination
 * @src: source
 *
 * Return: Character
 */
char *_strcpy(char *dest, char *src);

/**
 * get_func - returns needed function
 * @i: func key
 * Return: Pointer to function
 */
char* (*get_func(char i))(va_list);

/**
 * create_buffer - creates buffer to hold string
 * Return: pointer to buffer
 */
char *create_buffer(void);

/**
 * write_buffer - prints buffer, then frees it and frees va_list
 * @buffer: buffer holding print-ables
 * @len: length of print-able string
 * @list: va_list
 */
void write_buffer(char *buffer, int len, va_list params);


/**
 * struct types - types
 * @id: key
 * @func: ptr to func
 */

typedef struct types
{
        char *id;
        char* (*func)(va_list);
} print;
#endif
