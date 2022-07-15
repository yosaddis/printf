#include "main.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
	unsigned int ui = (unsigned int)INT_MAX + 1024;

	_printf("Let's try to printf a simple sentence.\n");
	printf("Let's try to printf a simple sentence.\n");
	printf("octa:[%o]\n", ui);
	_printf("octa:[%o]\n", ui);
	printf("hexa [%x, %X]\n", ui, ui);
	_printf("hexa [%x, %X]\n", ui, ui);
	printf("unsigned [%u]\n", ui);
	_printf("unsigned [%u]\n", ui);
	_printf("%b\n", 98);
	return (0);
}
