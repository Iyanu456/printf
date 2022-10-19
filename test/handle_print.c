#include "main.h"
#include <stdlib.h>

/**
 * get_printf_func - get printf function
 * @s: strng
 * Description: searches for appropriate printf function
 * Return: formatted string
 */

int handle_print(const char *fmt, int *id, va_list list,  char buffer[], int flags, int width, int precision, int size)
{
	int i, len = 0, printed_chars = -1;

	fmt_t fmt_ops[] = {
		{'c', print_char},
		{'s', print_string},
		{'i', print_int},
		{'d', print_int},
		{'b', print_binary},
		{'u', print_unsigned},
		{'o', print_octal},
		{'x', print_hexadecimal},
	};

	for (i = 0; fmt_ops[i].fmt != '\0'; i++)
	{
		if (fmt[*id] == fmt_ops[i].fmt)
			return (fmt_ops[i].func(list, buffer, flags, width, precision, size));
		if (fmt_ops[i].fmt == '\0')
		{
			if (fmt[*id] == '\0')
				return (-1);
			len += write(1,"%%", 1);
			if (fmt[*id - 1] == ' ')
				len += write(1, " ", 1);
			else if (width)
			{
				--(*id);
				while (fmt[*id] == ' ' && fmt[*id] != '\0')
					--(*id);
				if (fmt[*id] == ' ')
					return (1);
			}
		}
		len += write(1, &fmt[*id], 1);
		return (len);
	}
	return (printed_chars);
}
