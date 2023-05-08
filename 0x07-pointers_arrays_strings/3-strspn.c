#include "main.h"

/**
 *  _strspn - gets the length of a prefix substring
 *  @s: pointer to character
 *  @accept: pointer to character
 *  Return: return unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int c;

	for (c = 0; (!(s[c] == ('\0'))); c++)
	{
		if (s[c] == *accept)
		{
		return (c);
		}
	}
return (c);
}
