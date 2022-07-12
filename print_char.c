#include "main.h"
/**
 * print_char - prints char
 * @list: list of chars
 * Return: no of chars printed
 */

int print_char(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}
