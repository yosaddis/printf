#include "main.h"

/**
 * _printf - prints a recived string
 * @format: A string containing all selected charchter
 * Return: A total count of printed chars
 */

int _printf(const char *format, ...)
{
	int printed_chars;
	print_t f_list[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_integer},
		{"i", print_integer},
		{"b", print_binary},
		{"u", print_unsigned_int},
		{"o", print_octal},
		{"x", print_hex},
		{"X", print_heX},
		{NULL, NULL}
	};

	va_list args_list;

	if (format == NULL)
		return (-1);

	va_start(args_list, format);
	printed_chars = parser(format, f_list, args_list);
	va_end(args_list);
	return (printed_chars);
}
