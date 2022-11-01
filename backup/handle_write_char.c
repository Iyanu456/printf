#include "main.h"
int handle_write_char(char c, char buffer[], int flags, int width, int precision, int size)
{
	int i = 0;

	char pad = ' ';

	UNUSED(precision);
	UNUSED(size);

	if (flags && FL_ZERO)
		pad = '0';

	buffer[i++] = c;
	buffer[i] = '\0';

	if (width > 1)
	{
		buffer[BUFFER_SIZE - 1] = '\0';
		for (i = 0; i < width - 1; i++)
			buffer[BUFFER_SIZE - i - 2] = pad;

		if (flags & FL_MINUS)
			return (write(1, &buffer[0], 1) + write(1, &buffer[BUFFER_SIZE - i - 1], width -1));
		else
			return (write(1, &buffer[BUFFER_SIZE - i - 1], width - 1) + write(1, &buffer[0], 1));
	}
	return (write(1, &buffer[0], 1));
}
