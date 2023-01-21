#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);

/**
 * print_char - Prints a char
 * @arg: a list of arguments pointing to the
 * character to be printed.
 */

void print_char(va_list arg)
{
	char character;

	character = va_arg(arg, int);
	printf("%c", character);
}

/**
 * print_int - prints an int.
 * @arg: a list of arguments pointing to the
 * integer to be printed.
 */

void print_int(va_list arg)
{
	int number;

	number = va_arg(arg, int);
	printf("%d", number);
}

/**
 * print_float - prints a float.
 * @arg: A list of arguments pointing to the float to be
 * printed.
 */

void print_float(va_list arg)
{
	float fl;

	fl = va_arg(arg, double);
	printf("%f", fl);
}

/**
 * print_string - Prints a string
 * @arg: A list of arguments pointing to
 * the string to be printed.
 */

void print_string(va_list arg)
{
	char *string;

	string = va_arg(arg, char *);

	if (string == NULL)
	{
		printf("nil");
		return;
	}
	printf("%s", string);
}

/**
 * print_all - prints anything, followed by a new line.
 * @format: A sting of characters representing the argument types.
 * @...: A variable number of arguments to be printed.
 * Description: Any argument not of type char, int, float or
 * char * is ignored.
 * if a string argument is NULL, nill will be printed.
 */


void print_all(const char *const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *separator = "";
	printer_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);

	while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(funcs[j].symbol)))
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print(args);
			separator = ", ";
		}

		i++;
	}

	printf("\n");

	va_end(args);
}
