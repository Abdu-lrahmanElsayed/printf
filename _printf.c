#include "main.h"

/**
 * _printf - produces output according to a format.
 * @format: input.
 * Return: integer.
 */

int _printf(const char *format, ...)
{
	int i = 0;
	va_list args;

	if (format == NULL)
	{
		return (-1);
	}

	va_start(args, format);

	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			i++;
		}
		else
		{
			format++;
			if (*format == '\0')
			{
				break;
			}
			else if (*format == 'c')
			{
				char c = va_arg(args, int);
				write(1, &c, 1);
				i++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(args, char*);
				int length = 0;
				while (str[length] != '\0')
					length++;
				write(1, str, length);
				i += length;
			}
			else if (*format == '%')
			{
				write(1, format, 1);
				i++;
			}
		}
	}
}
