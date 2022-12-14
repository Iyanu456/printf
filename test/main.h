#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

#define UNUSED(x) void
#define BUFFER_SIZE 1024

#define FL_MINUS 1
#define FL_PLUS 2
#define FL_ZERO 4
#define FL_HASH 8
#define FL_SPACE 16

struct fmt_op
{
	char fmt;
	int (*func)(va_list, char[], int, int, int, int);
} fmt_t;

int _putchar(char c);
int _printf(const char *format, ...);

int (*get_printf_func)(va_list, char[], int, int, int, int);

int print_string(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_char(va_list types, char buffer[], int flags, int width, int precision, int size);
int print_percent(va_list types, char buffer[], int flags, int width, int precision, int size);

int print_int(va_list types, char buffer[], int flags, int width, int presision, int size);

int get_flags(const char *format, int *i);
int get_precision(const char *format, int *i, va_list list);
int get_width(const char* format, int *i, va_list list);
int get_size(const char *format, int *i, va_list list);
#endif
