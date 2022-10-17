#include "main.h"
#include <stdlib.h>

/**
 * frmt_function - format function
 * @s: strng
 * Description: parases string and replaces placeholders with values
 * Return: formatted string
 */

int _printf(const char *format, ...)
{
	int i, b, n;

	char *str;

	plh_t plhs[] {
		{ "%", "d", print_dec},
		{ "%", "s", print_int},
		{ "%", "f", print_float},
		{ "%", "x", print_hex},
		{NULL, NULL}
	};
	n = 0;
	while (s != '\0')
		n++;

	for (i = 0; i < n; i++)
	{
		for (b = 0; b < 6; b++)
		{
			if (*s[i] == plhs[b].plh[0] && *s[i + 1] == plhs[b].plh[1])
				return plhs[b].plh[2]();
		}
	}
}
