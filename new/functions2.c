#include "main.h"

/**
 * integer - a function that prints an integer.
 * @number: input integer
 * Return: digit count
 */
int integer(int number)
{
	unsigned int unint;
	int count;

	count = contadordigit(number);

	if (number < 0)
	{
		_putchar('-');
		unint = -number;
	}
	else
		unint = number;

	if (unint >= 10)
		integer(unint / 10);

	_putchar(unint % 10 + '0');

	return (count);
}

/**
 * print_int - prints a number
 * @format: format to print number
 * @pa: va_list with number to print
 * Return: number of characters printed
 */
int print_int(const char *format, va_list list, int curr_i)
{
	int num;

	int numero;

	num = va_arg(list, int)

	numero = integer(num);

	return (numero);
}
