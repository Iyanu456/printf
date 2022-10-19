#include "main.h"
int get_width(const char *format, int *i, va_list list)
{
	int width, cur_i;

	width = 0;
	for (cur_i = *i + 1; format[cur_i] != '\0'; cur_i++)
	{
		if (_isdigit(format[cur_i] ))
		{
			width *= 10;
			width += format[cur_i] - '0';
		}
		else if (format[cur_i] == '*')
		{
			cur_i++;
			width = va_arg(list, int);
			break;
		}
		else
			break;
	}
	*i = cur_i - 1;
	return (width);
}
