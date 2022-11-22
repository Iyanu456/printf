#include "main.h"
/**
 * print_char - prints a char
 * @format: unused
 * @list: va_list
 * @n: integer
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
/**
 * print_string - prints a string
 * @format: string to be printed
 * @list: variadic argument list
 * @curr_i: current index of format
 * Description: prints a string
 * Return: string length
 */
int print_string(const char *format, va_list list, int curr_i)
{
	int n = 0, count = 0;

	char *curr = va_arg(list, char *);

	if (curr == NULL)
		curr = "(null)";

	if (*curr == '\0')
		return (-1);

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
		n = 0;
	return (count);
}
/**
 * print_dec - prints a decimal integer
 * @format: string to be printed
 * @list: va_arg
 * @curr_i: current index oof formatted string
 * Description: prints a decimal integer
 * Return: integer count
 */
int print_dec(const char *format, va_list list, int curr_i)
{
	int len = 0, curr = va_arg(list, int);

	if (format[curr_i] == '%')
	{
		if (format[curr_i + 1] == 'd' || format[curr_i + 1] == 'i')
		{
			_printint(curr);
			len = _countint(curr);
		}
	}
	return (len);
}
/**
 * print_unsigned - prints an unsigned int
 * @format: string to be formatted
 * @list: va_list
 * @curr_i: current index of format
 * Description: prints an unsigned integer
 * Return: string count
 */
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
