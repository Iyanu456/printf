#include "main.h"

/**
 * get_precision - calcs precision for printing
 * @format: string to print arguments into
 * @i: list of arguments to print
 * @list: list of arguments
 *
 * Return: Precision
 */

int get_precision(const char *format, int *i, va_list list)
{
	int fur_i = *i + 1;
	int precision = -1;

	if (format[fur_i] != '.')
		return (precision);

	precision = 0;

	for (fur_i += 1; format[fur_i] != '\0'; fur_i++)
	{
		if (_isdigit(format[fur_i]))
		{
			precision *= 10;
			precision += format[fur_i] - '0';
		}
		else if (format[fur_i] == '*')
		{
			fur_i++;
			precision = va_arg(list, int);
			break;
		}
		else
			break;
	}

	*i = fur_i - 1;

	return (precision);
}
