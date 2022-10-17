#include "main.h"
#include <stdlib.h>

/**
 * get_printf_func - get printf function
 * @s: strng
 * Description: searches for appropriate printf function
 * Return: formatted string
 */

char get_printf_func(char *s)
{
	int i, n, plh_count;

	void *str;

	plh_t plhs[] {
		{ "%", "d", print_dec},
		{ "%", "s", print_string},
		{ "%", "f", print_float},
		{ "%", "x", print_hex},
	};
	n = 0;
	plh_count = 0;
	while (s != '\0')
		n++;

	for (i = 0; i < n; i++)
	{
		for (b = 0; b < 4; b++)
		{
			if (*s[i] == plhs[b].plh[0] && *s[i + 1] == plhs[b].plh[1])
			{
				plh_count += 2;
				i++;
			}
		}
	}
	return (s);
}
