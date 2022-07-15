#include "main.h"

/**
 * print_String - prints non-printables
 * @S: string to print
 * @Return: no of printed chars
 */
int print_String(va_list S)
{
	unsigned int i = 0;
	int counter =0;
	char *str = va_arg(S,char *);
	if (str == NULL)
		str = "()"
}
