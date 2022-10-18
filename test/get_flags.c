#include "main.h"
int get_flags(const char *format, int *i)
{
	int n, cur_i, flags;

	const char flags_ch[] = {'-', '+', '0', '#', ' ', '\0'};

	const int flag_arr[] = {FL_MINUS, FL_PLUS, FL_ZERO, FL_HASH, FL_SPACE, 0};

	flags = 0;

	for (cur_i = *i + 1; format[cur_i] != '\0'; cur_i++)
	{
		for (n = 0; flags_ch[n] != '\0'; n++)
		{
			if (format[cur_i] == flags_ch[n])
			{
				flags |= flag_arr[n];
				break;
			}

			if (flag_arr[n] == 0)
				break;
		}
	}
	*i = cur_i + 1;
	return(flags);
}
