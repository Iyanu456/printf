#include "main.h"
/**
 * printc - prints a char
 * @format: unused
 * @list: va_list
 * @i: integer
 * Description: prints a char
 * Return: 1
 **/

int print_char(__attribute__((unused)) const char *format, va_list list, int n)
{
	int i = n;

	char curr = va_arg(list, int);

	_putchar (curr);
	i = 1;
	return (i);
}

int print_string(const char *format, va_list list, int curr_i)
{
	int n = 0, count = 0;

	char *curr = va_arg(list, char *);

	if (curr == NULL)
		curr = "(null)";

	else if (*curr == '\0')
		return (-1);

	else if (format[curr_i] == '%')
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
		n = 0;
	return (count);
}

int print_dec(const char *format, va_list list, int curr_i)
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

int print_unsigned(const char *format, va_list list, int curr_i)
{
	int divisor = 1, i, resp;

	unsigned int n = va_arg(list, unsigned int);

	if (format[curr_i] == '%')
	{
		if (format[curr_i + 1] == 'u')
		{

			for (i = 0; n / divisor > 9; i++, divisor *= 10)
				;

			for (; divisor >= 1; n %= divisor, divisor /= 10)
			{
				resp = n / divisor;
				_putchar('0' + resp);

			}
		}

		return (i +  1);
	}

	return (0);

}
