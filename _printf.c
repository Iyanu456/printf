#include "main.h"
int _printf(const char *format, ...)
{
	int i = 0, len = 0, count = 0;

	va_list list;

	va_start(list, format);

	if (format == NULL)
		return (-1);

	while (format[i] != '\0')
	{
		if (format[i] ==  '%')
		{
			len = handle_print(format, list, i);
			if (len > 0)
			{
				count += len;
				i += 2;
				continue;
			}
		}
		else
		{
		if (format[i] == '\n')
			count += 0;
		else
			count++;
		_putchar(format[i]);
		i++;
		}
	}
	if (count < 0)
		count = 0;
	return (count);
}
