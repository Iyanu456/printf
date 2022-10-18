#include "main.h"
#include <stdlib.h>

int _printf(const char *format, ...)
{
	int i;

	va_list list;

	char *new_string;

	i = 0;

	va_start(list, format);
	while (format[i] != '\0')
	{
		new_string[i] = format[i];
		get_printf_func(*new_string[i], list);

		if ((get_printf_func)(new_string[i])(list) == NULL)
			{
				_putchar (new_string[i]);
			}
		i++;
	}

	return (0);
}
