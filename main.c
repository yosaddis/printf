#include "main.h"
#include <stdio.h>
#include <limits.h>

int main (void)
{
	int len, len2;
	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	printf("Length:[%d, %d]\n",len, len);
	printf("Length:[%d, %i]\n",len2, len2);
	_printf("%b\n", 98);

	return (0);
}
