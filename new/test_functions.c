#include "main.h"
int _printf(const char *format, ...)
{
	int i = 0, len = 0;

	char *buffer;

	va_list list;

	va_start(list, format);

	while (format[i] != '\0')
	{
		if (format[i] ==  '%')
		{
			len = handle_print(format, list, buffer, i);
			if (len == 1)
			{
				i += 2;
				continue;
			}
		}
			     _putchar(format[i]);
		i++;
	}
	va_end(list);
	return (1);
}