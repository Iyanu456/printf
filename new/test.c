#include "main.h"
#include <stdio.h>
int main(void)
{
	unsigned int u = -5;
	int i = 10;
	int j = 20;
	char name = 'I';
	char *newid = "Abraham";
	char *id = "Iyanu";
	char *anid = "David";
	_printf("Hello World! %c \n", name);
	_printf("Hello %s, Welcome %s \n Do you know %s he is %d and i am %d \n", id, newid, anid, i, j);
	_printf("123456 789 %%\n");
	_printf("%u is an unsigned int \n");
	_printf("\n");
	return (0);
}
