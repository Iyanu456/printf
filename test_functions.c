#include "main.h"
int _printf(const char *format, ...)
{
	int i, len;

	char *buffer;

	va_list list;

	va_start(list, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			len = handle_print(format, list, buffer, i + 1);
			if (len == 1)
				i++;
		}
		else if (format[i-1] == '%')
		{
			i++;
			continue;
		}
		else
		{
			_putchar (format[i]);
		}
	}
	va_end(list);
	return (1);
}
