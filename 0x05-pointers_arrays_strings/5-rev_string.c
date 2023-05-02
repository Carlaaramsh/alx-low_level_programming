#include "main.h"

/**
 * rev_string - prints a reverse string
 *
 * @s: the string
 *
 * Return: void
 */

void rev_string(char *s)
{
        int c = 0;

        while (s[c] != '\0')
        {
                c++;
        }

        for (c -= 1; c >= 0; c--)
        {
               *s = (s[c]);
        }
}
