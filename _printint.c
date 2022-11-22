#include <unistd.h>
#include "main.h"


/**
 * _countint -counts the number of characters in an integer
 * @n: The character to print
 * Description: counts the number of characters in an integer
 * Return: the number of characters
 */
int _countint(int n)
{
	int num = n, count = 0;

	do {
		count++;
		num /= 10;
	} while (num != 0);
	return (count);
}
/**
 * _printint - prints n integer
 * @n: integer
 * Description: prints an integer
 * Return: integer
 */
int _printint(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
		_printint(n / 10);

	_putchar(n % 10 + '0');
	return (0);
}
