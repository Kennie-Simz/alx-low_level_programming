#include "main.h"


/**
 * swap_int - swaps two integers values from their addresses
 * @a: address is of first integer
 * @b: address is of second integer
 *
 **/


void swap_int(int *a, int *b)
{
	int swapped = *a;
	*a = *b;
	*b = swapped;
}
