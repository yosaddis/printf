#include"main.h"

/**
 * print_integer - prints integer
 * @args: arguments
 * Return: no of chars printed
 */
int print_integer(va_list args)
{
	int count, n, div;
	unsigned int num;

	n = va_arg(args, int);
	div = 1;
	count = 0;

	if (n < 0)
	{
		count += _putchar('-');
		num = n * -1;
	}
	else
		num = n;
	for (; num / div > 9; )
		div *= 10;
	for (; div != 0;)
	{
		count += _putchar('0' + num / div);
		num %= div;
		div /= 10;
	}

	return (count);
}
