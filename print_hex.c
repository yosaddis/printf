#include "main.h"

/**
 * hex_symbol - returns the hex number symbol
 * @num: number to convert into letter
 * @x:checks the case
 * Return: ASCII value of letter
 */
int hex_symbol(int num, char x)
{
	char *hex = "abcdef";
	char *Hex = "ABCDEF";

	num = num - 10;
	if (x == 'x')
		return (hex[num]);
	else
		return (Hex[num]);
	return (0);
}


/**
 * print_hex - convert a number to base 16
 * @list: list of arguments passed to this function
 * Return: the lenght of the number printed
 */
int print_hex(va_list list)
{
	unsigned int num;
	int count, reminder;
	char *string;
	char *rev_s;

	num = va_arg(list, unsigned int);
	if (num == 0)
		return (_putchar('0'));
	if (num < 1)
		return (-1);
	count = base_length(num, 16);
	string = malloc(sizeof(char) * count + 1);
	if (string == NULL)
		return (-1);
	for (count = 0; num > 0; count++)
	{
		reminder = num % 16;
		if (reminder > 9)
		{
			reminder = hex_symbol(reminder, 'x');
			string[count] = reminder;
		}
		else
			string[count] = reminder + 48;
		num = num / 16;
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

/**
 * print_heX - prints base 16 with upper char
 * @list: args
 * Return: no of chars printed
 */

int print_heX(va_list list)
{
	unsigned int num, count, reminder;
	char *string, *rev_s;

	num = va_arg(list, unsigned int);

	if (num == 0)
		return (_putchar('0'));
	if (num < 1)
		return (-1);
	count = base_length(num, 16);
	string = malloc(sizeof(char) * count + 1);
	if (string == NULL)
		return (-1);
	for (count = 0; num > 0; count++)
	{
		reminder = num % 16;
		if (reminder > 9)
		{
			reminder = hex_symbol(reminder, 'X');
			string[count] = reminder;
		}
		else
			string[count] = reminder;
		num = num / 16;
	}
	string[count] = '\0';
	rev_s = rev_string(string);
	if (string == NULL)
		return (-1);
	write_base(rev_s);
	free(string);
	free(rev_s);
	return (count);
}
