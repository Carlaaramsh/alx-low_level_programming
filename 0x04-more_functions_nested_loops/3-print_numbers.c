#include "main.h"
#include <stdio.h>
/** print_numbers - prints the numbers
 * @i: number to be printed
 * Return: void
 *
 */
void print_numbers(void)
{
	char i;
	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
