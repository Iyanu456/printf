#include "main.h"
/**
 * _printf - printf function
 * @format: string to be printed
 * Description: prints a string
 * Return: string count
 */
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

		if (format[i] == '\n')
		{
			count += 0;
			continue;
		}

		else
		{
			count++;
			_putchar(format[i]);
			i++;
			continue;
		}
	}
	if (count < 0)
		count = 0;
	return (count);
}
