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
	int len = 0, curr = va_arg(list, int);

	if (format[curr_i] == '%')
	{
		if (format[curr_i + 1] == 'd')
		{
			_printint(curr);
			len = _countint(curr);
		}
	}
	return (len);
}
