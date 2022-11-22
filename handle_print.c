#include "main.h"
#include <stdlib.h>

/**
 * handle_print - get printf function
 * @fmt: string to be formatted
 * @list: va_list
 * @curr_i: current index of formatted string
 * Description: searches for appropriate printf function
 * Return: string lenth
 */

int handle_print(const char *fmt, va_list list, int curr_i)
{
	int i;

	typ_t type_ops[] = {
		{'c', print_char},
		{'s', print_string},
		{'d', print_dec},
		{'i', print_dec},
		{'u', print_unsigned},
		{'x', print_hex},
		{'X', print_HEX},
	};
	for (i = 0; i < 6; i++)
	{
		if (fmt[curr_i] == '%' && fmt[curr_i + 1] == '%')
		{
			_putchar('%');
			return (1);
		}

		else if (fmt[curr_i] == '%' && fmt[curr_i + 1] == type_ops[i].fmt)
			return (type_ops[i].func(fmt, list, curr_i));

		else if (fmt[curr_i + 1] == '\0')
			return (0);
	}
	return (0);
}
