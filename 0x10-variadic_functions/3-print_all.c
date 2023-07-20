#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: conversion specifier to print
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list args;
	f_dt form_types[] = {
		{"c", print_a_char},
		{"i", print_a_integer},
		{"f", print_a_float},
		{"s", print_a_char_ptr}
	};
	unsigned int o = 0, p = 0;
	char *separator = "";

	va_start(args, format);
	while (format != NULL && format[o])
	{
		p = 0;
		while (p < 4)
		{
			if (format[o] == *form_types[p].identifier)
			{
				form_types[p].f(separator, args);
				separator = ", ";
			}
			p++;
		}
		o++;
	}
	va_end(args);
	printf("\n");
}

/**
 * print_a_char - print character char
 * @separator: separator fo characters
 * @args: list of variadic arguments
 * Return: void
 */
void print_a_char(char *separator, va_list args)
{
	printf("%s%c", separator, va_arg(args, int));
}
/**
 * print_a_integer - print character int
 * @separator: separator fo characters
 * @args: list of variadic arguments
 * Return: void
 */
void print_a_integer(char *separator, va_list args)
{
	printf("%s%i", separator, va_arg(args, int));
}

/**
 * print_a_float - print character float
 * @separator: separator fo characters
 * @args: list of variadic arguments
 * Return: void
 */
void print_a_float(char *separator, va_list args)
{
	printf("%s%f", separator, va_arg(args, double));
}


/**
 * print_a_char_ptr - print character char pointer
 * @separator: separator fo characters
 * @args: list of variadic arguments
 * Return: void
 */

void print_a_char_ptr(char *separator, va_list args)
{
	char *arg = va_arg(args, char *);

	if (arg == NULL)
	{
		printf("%s%s", separator, "(nil)");
		return;
	}
	printf("%s%s", separator, arg);
}
