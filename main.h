#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
/**
 * struct x - type struct
 * @c: first varible
 * @f: secend
 */
struct x
{
	char *c;
	int (*f)(va_list);
};
typedef struct x check;
int _printf(const char *format, ...);
int print_char(va_list x);
int print_string(va_list x);
int print_reminder(va_list x);
int _putchar(char c);
int parser(const char *f, check sp[], va_list x);
int print_number(va_list x);

#endif
