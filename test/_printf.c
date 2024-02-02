#include "main.h"

/**
 * _printf - produces output according to a format.
 * @format: input.
 * Return: integer.
 */

int _printf(const char *format, ...)
{
	match m[] = {
		{"%c", printc}, {"%s", prints}, {"%%", print37}
	};

	va_list args;
	int i = 0;
	int len = 0;
	int j;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	while (format[i] == '\0')
	{
		j = 3;
		while (j >= 0)
		{
			if (m[j].id[0] == format[i] && m[j].id[1] == format[i +1])
			{
				len = len + m[j].f(args);
				i = i + 2;
				continue;
			}
			j--;
		}
		_putchar(format[i]);
		i++;
		len++;
	}
	va_end(args);
	return (len);
}
