#include "main.h"

/**
 * print_char - function print char if after reminder c
 * @x: first argument
 *
 * Return: 1 evry time that call it
 */
int print_char(va_list x)
{
	_putchar(va_arg(x, int));
	return (1);
}
/**
 * print_string - function print string if after reminder s
 * @x: argument that passed to functin
 *
 * Return: number of char in string
 */
int print_string(va_list x)
{
	int count;
	char *str;

	count = 0;
	str = va_arg(x, char *);
	while (*str)
	{
		_putchar(*str);
		count++;
		str++;
	}
	return (count);
}
/**
 * print_reminder - print % if after % is %
 * @x: is pointer
 * Return: 1
 */
int print_reminder(va_list x)
{
	(void)x;
	_putchar('%');
	return (1);
}
