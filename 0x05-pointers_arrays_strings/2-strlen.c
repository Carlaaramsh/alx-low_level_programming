#include "main.h"

/**
 * int _strlen -  returns the length of a string.
 *
 * @s: the character
 *
 * Return: void
 */

int _strlen(char *s)
{
	int count;
	count = 0;
	for (; *s != '\0'; s++)
	{
		count++;
	}
	return(count);
}
