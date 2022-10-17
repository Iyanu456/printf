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
	int i, n, j = 0, plh_count;

	void *str, **new_str;

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

	str = malloc(sizeof(char) * n);

	while (s != '\0')
	{
		str[j] = s[j];
		j++;
	}

	for (i = 0; i < n; i++)
	{
		for (b = 0; b < 4; b++)
		{
			if (str[i] == plhs[b].plh[0] && str[i + 1] == plhs[b].plh[1])
				plh_count += 2;
		}
	}

	new_string = malloc(sizeof(char) * (n - plh_count + varg_count);
	return (s);
}
