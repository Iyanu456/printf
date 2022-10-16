#include "main.h"
#include <stdlib.h>

/**
 * frmt_function - format function
 * @s: strng
 * Description: parases string and replaces placeholders with values
 * Return: formatted string
 */

char frmt_func(char *s)
{
	int i, b, n;

	char *str;

	plh_t plhs[] {
		{ %, d, print_char},
		{ %, i, print_int},
		{ %, s},
		{ %, u},
		{ %, f},
		{NULL, NULL}
	};
	n = 0;
	while (s != '\0')
		n++;

	for (i = 0; i < n; i++)
	{
		for (b = 0; b < 6; b++)
		{
			if (*s[i] == plhs[b].plh[0] & *s[i + 1] == plhs[b].plh[1])
				return plhs[b].plh[2];
		}
	}
}
