#include "main.h"
/**
 * -isupper - it will check for uppercase letters
 *  @c: the character to be checked
 * Return: 0 or 1
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
