#include "main.h"
#include <stdio.h>
/**
 * _isdigit - checks for uppercase
 * Description: checks for uppercase
 * @c: integer value
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		if (c == a)
		{
			return (1);
		}
		else
		{
			continue;
		}
	}
	return (0);
}
