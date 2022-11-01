#include "main.h"
#include <stdio.h>
int main(void)
{
	char *name = "I";
	char *newid = "Abraham";
	char *id = "Iyanu";
	char *anid = "David";
	_printf("Hello World! %s \n", name);
	_printf("Hello %s, Welcome %s \n Do you know %s \n", id, newid, anid);
	return (0);
}
