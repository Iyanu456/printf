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
	int i;

	char *str;

	plh_t plh[] {
		{ %, d},
		{ %, i},
		{ %, s},
		{ %, u},
		{ %, f},
		{NULL, NULL}
	};
}
