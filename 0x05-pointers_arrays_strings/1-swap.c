#include "main.h"

/**
 * swap_int - function that swaps the value of two inegers
 * @a: this is the first entry
 * @b: this is the second entry
 */
void swap_int(int *a, int *b)
{
	int change;


	change = *a;
	*a = *b;
	*b = change;
}
