#include "main.h"
#include <stdlib.h>

/**
 * get_printf_func - get printf function
 * @s: strng
 * Description: searches for appropriate printf function
 * Return: formatted string
 */

int handle_print(const char *fmt, va_list list,  char *buffer, int curr_i)
{
	int i;

	typ_t type_ops[] = {
		{'c', print},
		{'s', prints},
	};
	for (i = 0; i < 2; i++)
	{
		if (fmt[curr_i] == '%' && fmt[curr_i + 1] == type_ops[i].fmt)
			return (type_ops[i].func(fmt, list, buffer, curr_i));

		else if (fmt[curr_i + 1] == '\0')
			return (-1);
		else if (fmt[curr_i] & fmt[curr_i + 1] == '%')
		{
			_putchar('%');
			return (1);
		}
		else
		{
			_putchar(fmt[curr_i]);
		}
	}
	return (1);
}
