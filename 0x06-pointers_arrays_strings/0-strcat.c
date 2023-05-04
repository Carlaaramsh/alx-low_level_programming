#include "main.h"
/**
 * *_strcat - a function
 *
 * @dest: first char
 * @src: second char
 *
 * Return: return character
 */

char *_strcat(char *dest, char *src)
{
	char *conc;

	conc = (*dest + *src);
	return (conc);
}
