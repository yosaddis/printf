#include "main.h"

/**
 * print_octal - convert a number to base 8
 * @list: list of arguments passed to this function
 * Return: the lenght of the number printed
 */
int print_octal(va_list list)
{
	unsigned int num;
	int count;
	char *string;
	char *rev_s;

	num = va_arg(list, unsigned int);
	if (num == 0)
		return (_putchar('0'));
	if (num < 1)
		return (-1);
	count = base_length(num, 8);
	string = malloc(sizeof(char) * count + 1);
	if (string == NULL)
		return (-1);
	for (count = 0; num > 0; count++)
	{
		string[count] = (count % 8) + 48;
		num = num / 8;
	}
	string[count] = '\0';
	rev_s = rev_string(string);
	if (rev_s == NULL)
		return (-1);
	write_base(rev_s);
	free(string);
	free(rev_s);
	return (count);
}
