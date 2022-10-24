#include "main.h"
int print(const char *format, va_list list, char *buffer, int curr_i)
{
	int i = curr_i, count = 0;

	char curr = va_arg(list, int);

		if (format[i - 1] == '%' && format[i] == 'd')
		{
			buffer[curr_i];
			_putchar (curr);
			return (1);
		}
		else
			_putchar (format[i]);

		return (1);
}

int prints(const char *format, va_list list, char *buffer, int curr_i)
{
	int i = curr_i, n = 0, count = 0;

	char *curr = va_arg(list, char *);

	if (format[curr_i - 1] == '%' && format[curr_i] == 's')
		{
			while (curr[n] != '\0')
			{
				_putchar (curr[n]);
				count++;
			n++;
			}
			return (1);
		}
	else
	{
		_putchar (format[curr_i]);
	}
		n = 0;
	return (count);
}
