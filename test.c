#include "main.h"
#include <stdio.h>
int main(void)
{
	int i = 10;
	int j = 20;
	char *name = "I";
	char *newid = "Abraham";
	char *id = "Iyanu";
	char *anid = "David";
	_printf("Hello World! %s \n", name);
	_printf("Hello %s, Welcome %s \n Do you know %s he is %d and i am %d \n", id, newid, anid, i, j);
	_printf("\n");
	return (0);
}
