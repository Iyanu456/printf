#include <unistd.h>
#include "main.h"


/**

 * _putchar - writes the character c to stdout

 * @c: The character to print

 *

 * Return: On success 1.

 * On error, -1 is returned, and errno is set appropriately.

 */
int _countint(int n)
{
	int num, count = 0;

	do
	{
		count++;
		num /= 10;
	} while (num != 0);
	return (count);
}

int _printint(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n/10)
		_printint(n/10);

	_putchar(n%10 + '0');
	return (0);
}
