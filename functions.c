#include "main.h"
int prints(const char *format, va_list list, int curr_i)
{
	int n = 0, count = 0;

	char *curr = va_arg(list, char *);

	if (format[curr_i] == '%')
		{
			if (format[curr_i + 1] == 's')
			{
				while (curr[n] != '\0')
				{
					_putchar (curr[n]);
					count++;
					n++;
				}
				n = 0;
			}
		}
	else
	{
		return (0);
	}
		n = 0;
	return (count);
}

int _printdec(const char *format, va_list list, int curr_i)
{
	int count = 0, curr = va_arg(list, int);

	if (format[curr_i] == '%')
	{
		if (format[curr_i + 1] == 'd')
		{
			count = _printint(curr);
		}
	}
	return (_countint(curr));
}
