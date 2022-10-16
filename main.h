#ifndef MAIN_H
#define MAIN_H

typedef struct
{
	char *percent;
	char *type;
	char *symbol;
	char (*f)(char *str);
} printer_func ;

int _printf(const char *format, ...);
#endif
