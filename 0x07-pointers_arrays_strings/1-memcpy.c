#include "main.h"

/**
 * _memcpy - copies n bytes from src to dest
 * @dest : pointer to character
 * @src: pointer to other character
 * @n: number of bytes
 * Return: pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
	dest[x] = src[x];
	}
	return (dest);
}
