#include "main.h"
int _printf(const char *format, ...)
{
	int i = 0, len = 0, count = 0, f_count = 0;

	va_list list;

	va_start(list, format);

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
		if (format[i] == '\0')
			count -= 4;
		_putchar(format[i]);
		count++;
		i++;
		}
	}
	f_count = count;
	va_end(list);
	printf("count: %d\n", f_count);
	return (count);
}
