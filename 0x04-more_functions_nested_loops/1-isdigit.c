#include "main.h"
/**
 * _isdigit -checks for a digit
 * @c: is the object being checked if its is digit
 * Return: 1 or 0
 */
int _isdigit(int c)
{
	if (c >= ('0') && c <= ('9'))
		return (0);
	else
		return (1);
}
