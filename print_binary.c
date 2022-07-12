#include "main.h"

/**
 * print_binary - convert a number to base 2
 * @list: list of arguments passed to this function
 * Return: the lenght of the number printed
 */
int print_binary(va_list list)
{
	unsigned int num;
	int i, count;
	char *string;
	char *rev_s;

	num = va_arg(list, unsigned int);
	if (num == 0)
		return (_putchar('0'));
	if (num < 1)
		return (-1);
	count = base_length(num, 2);
	string = malloc(sizeof(char) * count + 1);
	if (string == NULL)
		return (-1);
	for (i = 0; num > 0; i++)
	{
		if (num % 2 == 0)
			string[i] = '0';
		else
			string[i] = '1';
		num = num / 2;
	}
	string[i] = '\0';
	rev_s = rev_string(string);
	if (rev_s == NULL)
		return (-1);
	write_base(rev_s);
	free(string);
	free(rev_s);
	return (count);
}
