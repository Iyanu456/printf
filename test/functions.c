#include "main.h"
#include <stdio.h>
#include <stdarg.h>

int print_string(char c, va_list list)
{
	_putchar (va_arg(list, char));
	return (0);
}

int print_dec(char c, va_list list)
{
	_putchar (va_arg(list, char));
	return (0);
}
