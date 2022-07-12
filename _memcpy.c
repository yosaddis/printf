#include"main.h"

/**
 * _memcpy - mcompy memory contents
 * @dest: destination for copying
 * @src: source
 * @n: The number of bytes
 * Return: pointer to the dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
