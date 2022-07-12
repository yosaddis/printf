#include"main.h"

/**
 * _putchar - prints a charchter to stdout
 * @c: charchter to print
 * Return: on success 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
