#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <string.h>
#include <limits.h>

typedef struct format
{
	char id;
	int (*f)(va_list);
} match;
int _putchar(char c);
int printc(va_list val);
int prints(va_list var);
int print37(void);
int _printf(const char *format, ...);

#endif
