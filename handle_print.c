#include "main.h"

/**
 * parser - function print
 * @f: first varable
 * @sp: secend varible
 * @x: 3th var
 *
 * Return: number of char printed
 */
int parser(const char *f, check sp[], va_list x)
{
	int j, count, printed_ch;

	count = 0;
	printed_ch = 0;
	while (*f)
	{
		if (*f == '%')
		{
			f++;
			if (*f == '\0')
				return (-1);
			j = 0;
			while (sp[j].c != NULL)
			{
				if (*f == sp[j].c[0])
				{
					count = sp[j].f(x);
					printed_ch += count;
					break;
				}
				j++;
			}
			if (sp[j].c == NULL)
			{
				printed_ch += print_reminder(x);
				printed_ch += _putchar(*f);
			}
		}
		else
			printed_ch += _putchar(*f);
		f++;
	}
	return (printed_ch);
}
