#include "main.h"

/**
 * print_string - prints a string
 * @list: arguments
 * Return: no of chars printed
 */

int print_string(va_list list)
{
	int count;
	char *string;

	string = va_arg(list, char *);
	if (string == NULL)
		string = "(null)";
	for (count = 0; string[count] != '\0'; count++)
		_putchar(string[count]);
	return (count);
}
