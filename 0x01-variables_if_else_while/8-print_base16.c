#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse.
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;
	char letter;

	for (num = '0'; num <= '9'; num++)
		putchar(num);
	for (letter = 'a'; letter < 'g'; letter++)
		putchar(letter);
	putchar('\n');

return (0);
}
