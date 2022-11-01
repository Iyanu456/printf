#include "main.h"

/**
 * is_printable - evaluates if char is printable
 * @a: char
 *
 * Return: 1 if char is printable, else 0.
 */
int is_printable(char a)
{
	if (a >= 32 && a < 127)
		return (1);

	return (0);
}

/**
 * append_hexa_code - append ascii
 * @buffer: array of chars
 * @i: index at which to start appending
 * @ascii_code: ascii
 * Return: always 3
 */
int append_hexa_code(char ascii_code, char buffer[], int i)
{
	char map_to[] = "0123456789ABCDEF";
	if (ascii_code < 0)
		ascii_code *= -1;

	buffer[i++] = '\\';
	buffer[i++] = 'x';

	buffer[i++] = map_to[ascii_code / 16];
	buffer[i] = map_to[ascii_code % 16];

	return (3);
}
