#include "main.h"

/**
 * _memset() - fills the first n bytes of the memory area pointed to by s with a byte
 * @s: pointer to a character
 * @b: character that we will use to fill with
 * @n: the number of bytes that i want to fill
 * Return: pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for ( x = 0; x < n; x++)
	{
	s[x] = b;
	}

	return (s);
}
