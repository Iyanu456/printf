#ifndef MAIN_H
#define MAIN_H

typedef struct plh
{
	char *symbol;
	char *type;
} plh_t;

int _printf(const char *format, ...);
char get_printf_func(char *s);
#endif
