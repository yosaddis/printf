#include "main.h"

/**
 * write_base - sends characters to be
 * @string: string to parse
 */

void write_base(char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
		_putchar(string[i]);
}
