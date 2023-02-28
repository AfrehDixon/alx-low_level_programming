#include <stdio.h>

/**
 * swap_int - swaps the value of two integers
 * @a: first integer to be swapped
 * @b: second integer to be swapped
 * Return: always 0
*/

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

