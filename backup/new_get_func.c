#include "main.h"
int get_func(const char *format, va_list list)
{
	int i, n;

	typ_t type_ops[] = {
		{'c', print},
		{'s', prints},
	};

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (n = 0; n < 2; n++)
			{
				if (format[i + 1] == type_ops[n].fmt)
					type_ops[n].func(format, list);
				else
					continue;
			}
		}
		else
			_putchar (format[i]);
	}
	n = 0;
	return (0);
}
