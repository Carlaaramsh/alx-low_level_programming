#include "main.h"

/**
 * swap_int - a function that resets the value
 *
 * @a: the pointer name
 * @b: the second pointer name
 *
 * Result: return 
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
