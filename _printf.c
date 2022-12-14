#include "main.h"
/**
 * _printf - printf function
 * @format: string to be printed
 * Description: prints a string
 * Return: string count
 */
int _printf(const char *format, ...)
{
	int i, len = 0, count = 0;

	va_list list;

	va_start(list, format);

	if (format == NULL)
		return (-1);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '\0')
			break;

		if (format[i] == '%')
		{
			len = handle_print(format, list, i);
			if (len > 0)
			{
				count += len;
				i++;
				continue;
			}
			else if (len == -1)
				return (-1);
		}

		if (format[i] == '\n')
		{
			count ++;
			_putchar('\n');
			continue;
		}
			count++;
			_putchar(format[i]);
			continue;
	}
	va_end(list);
	if (count < 0)
		count = 0;
	return (count);
}
