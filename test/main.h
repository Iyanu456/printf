#include <stdarg.h>
#include <stdlib.h>
#ifndef MAIN_H
#define MAIN_H

typedef struct print_op
{
	char symbol;
	int (*func)(va_list);
} ops;

int _printf(const char *format, ...);
int (*get_printf_func(char c))(va_list);
int print_char(va_list list);
int print_string(va_list list);
int print_float(va_list list);
int print_hex(va_list list);
#endif
