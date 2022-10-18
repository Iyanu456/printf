#include "main.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * get_printf_func - get printf function
 * @s: strng
 * Description: searches for appropriate printf function
 * Return: formatted string
 */

int (*get_printf_func)(char *c)(va_list) = {
	int i;

	ops print_op[] = {
		{ 'd', print_dec},
		{ 's', print_char},
		{ 'f', print_float},
		{ 'x', print_hex},
		{ '\0', NULL}
	};

	i = 0;

	while (print_op[i].symbol)
	{
		if (print_op[i].symbol == c)
		{
			return (print_op[i].func);
		}

		i++;
	}

	return (NULL);
}
