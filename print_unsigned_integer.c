#include "main.h"

/**
 * print_unsigned_number - print unsigned integer
 * @n: integer to print
 * Return: count of printed chars
 */

int print_unsigned_number(unsigned int n)
{
	int div, count;
	unsigned int num;

	div = 1;
	count = 0;
	num = n;

	for (; num / div > 9; )
		div *= 10;
	for (; div != 0; )
	{
		count += _putchar('0' + num / div);
		num %= div;
		div /= 10;
	}
	return (count);
}
/**
 * unsigned_integer - print unsigned integers
 * @list: list of args
 * Return: count of no printed
 */

int print_unsigned_int(va_list list)
{
	unsigned int n;

	n = va_arg(list, unsigned int);

	if (n == 0)
		return (print_unsigned_number(n));
	if (n < 1)
		return (-1);
	return (print_unsigned_number(n));
}
