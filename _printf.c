#include "main.h"

/**
 * _printf - functon print
 * @format: first varible
 *
 * Return: nuber of char that function printed
 */
int _printf(const char *format, ...)
{
	int count_char;
	va_list args;
	check x_list[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_reminder},
		{"i", print_number},
		{"d", print_number},
		{NULL, NULL}
	};
	if (format == NULL)
		return (-1);
	va_start(args, format);
	count_char = parser(format, x_list, args);
	va_end(args);
	return (count_char);
}
