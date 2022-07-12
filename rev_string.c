#include "main.h"

/**
 * rev_string - reverse a string
 * @string: string to reverse
 * Return: A pointer to a character
 */

char *rev_string(char *string)
{
	int count, head;
	char tmp;
	char *dest;

	for (count = 0; string[count] != '\0'; count++)
		;
	dest = malloc(sizeof(char) * count + 1);
	if (dest == NULL)
		return (NULL);
	_memcpy(dest, string, count);
	for (head = 0; head < count; head++, count--)
	{
		tmp = dest[count - 1];
		dest[count - 1] = dest[head];
		dest[head] = tmp;
	}
	return (dest);
}
