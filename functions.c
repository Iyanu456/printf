#include "main.h"

/**
 * print_char - print char
 * @types: list of arguments
 * @buffer: buffer array
 * @flags: calculates active flags
 * @width: width
 * @precision:precision
 * @size: size
 * Return: number of printed characters
 */
int print_char(va_list types, char buffer[], int flags, int width, int precision, int size)
{
	char c = va_arg(types, int);

	return (handle_write_char(c, buffer, flags, width, precision, size));
}

/**
 * prints_string - print string
 * @types: list of arguments                   
 * @buffer: buffer array
 * @flags: calculates active flags
 * @width: width            
 * @precision:precision
 * @size: size
 * Return: number of printed characters
 */
int print_string(va_list types, char buffer[], int flags, int width, int precision, int size)
{
	int length = 0, i;
	char str = va_arg(types, char);

	UNUSED(buffer);
	UNUSED(flags);
	UNUSED(width);
	UNUSED(precision);
	UNUSED(size);
	if (str == NULL)
	{
		str = "(null)";
		if (precision >= 6)
			str = " ";
	}

	while (str[length] != '\0')
		length++;
	if (precision >= 0 && precision < length)
		length = precision;

	if (width > length)
	{
		if (flags & FL_ MINUS)
		{
		write(1, &astr[0], length;
		return (width);
		}
	}

	return (write(1, str, length));
}
