#include "main.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * get_printf_func - get printf function
 * @s: strng
 * Description: searches for appropriate printf function
 * Return: formatted string
 */

int (*get_printf_func(char c))(va_list)
{
	int i;

	ops print_op[] = {
		{ 'd', print_char},
		{ 's', print_string},
		{ 'f', print_float},
		{ 'x', print_hex},
		{ '\0', NULL}
	};

	i = 0;

	while (print_op[i].symbol)
	{
		if (c == print_op[i].symbol)
		{
			return (print_op[i].func);
		}

		i++;
	}

	return (NULL);
}
