#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: always (0)
 */
void more_numbers(void)
{
	int c;
	int  b;

	for (b = '0'; b <= '9'; b++)
	{
		for (c = '0'; c <= '14'; c++)
			_putchar(c);
	}
	_putchar('\n');
}
