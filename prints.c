#include "main.h"

/**
 * prints - prints string.
 * @var: the specifid char.
 * Retrun: length of the string.
 */

int prints(va_list var)
{
	char *str;
	int i, length;

	str = va_arg(var, char*);
	if (str == NULL)
	{
		str = "Null";
		length = strlen(str);
		for (i = 0; i <= length; i++)
			_putchar(str[i]);
		return (length);
	}
	else
	{
		length = strlen(str);
		for (i = 0; i <= length; i++)
                        _putchar(str[i]);
                return (length);

	}
}
