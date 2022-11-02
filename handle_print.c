#include "main.h"
#include <stdlib.h>

/**
 * get_printf_func - get printf function
 * @s: strng
 * Description: searches for appropriate printf function
 * Return: formatted string
 */

int handle_print(const char *fmt, va_list list, int curr_i)
{
	int i;

	typ_t type_ops[] = {
		{'c', printc},
		{'s', prints},
		{'d', _printdec},
	};
	for (i = 0; i < 3; i++)
	{
		if (fmt[curr_i] == '%' && fmt[curr_i + 1] == type_ops[i].fmt)
			return (type_ops[i].func(fmt, list, curr_i));

		else if (fmt[curr_i + 1] == '\0')
			return (-1);
	}
	return (1);
}
