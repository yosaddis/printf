#include "main.h"

/**
 * base_length - calculates the lenght
 * @num:no for which the length
 * @base: base to be calculated by
 * Return: leght of the number
 */

unsigned int base_length(unsigned int num, int base)
{
	unsigned int i;

	for (i = 0; num > 0; i++)
	{
		num = num / base;
	}

	return (i);
}
