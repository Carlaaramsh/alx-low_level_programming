#include "main.h"

/**
 * print_rev - prints a reverse string
 *
 * @s: the string
 *
 * Return: void
 */

void print_rev(char *s)
{
	for (*s = '\0'; *s--;)
	{
		_putchar(*s);
	}
	_putchar('\n');
}
