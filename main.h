#ifndef _MAIN_H
#define _MAIN_H

#define END '\0'

#include <unistd.h>
#include <stdarg.h>

/*
 * Verah
 * _putchar
 * _puts
 * _printf
 */

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

#endif
