#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

#define UNUSED(x) (void)(x)
#define BUFFER_SIZE 1024

#define FL_MINUS 1
#define FL_PLUS 2
#define FL_ZERO 4
#define FL_HASH 8
#define FL_SPACE 16

#define S_LONG 2
#define S_SHORT 1

typedef struct fmt
{
	char fmt;
	int (*func)(va_list, char[], int, int, int, int);
} fmt_t;

typedef struct type
{
	char fmt;
	int (*func)(const char*, va_list, int);
} typ_t;

int _putchar(char c);
int _printint(int n);
int _countint(int n);
int _printf(const char *format, ...);
int print_dec(const char *format, va_list list, int curr_i);
int print_string(const char *format, va_list list, int curr_i);
int print_char(const char *format, va_list list, int curr_i);
int print_unsigned(const char *format, va_list list, int curr_i);

int integer(int number);
int _isdigit(int c);
int is_digit(int c);
int get_func(const char *format, va_list list);

int handle_print(const char *fmt, va_list list, int curr_i);
int handle_write_char(char c, char buffer[], int flags, int width, int precision, int size);

int get_flags(const char *format, int *i);
int get_precision(const char *format, int *i, va_list list);
int get_width(const char* format, int *i, va_list list);
int get_size(const char *format, int *i);
#endif
