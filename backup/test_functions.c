#include "main.h"
int _printf(const char *format, ...)
{
	int i, len = 0;

	char *buffer;

	va_list list;

	va_start(list, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			len = 1;
			len = handle_print(format, list, buffer, i);
		}
		else
		{
			_putchar(format[i]);
		}
	}
	va_end(list);
	return (1);
}
