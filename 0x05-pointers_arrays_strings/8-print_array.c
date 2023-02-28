#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n element of int array
 * @a: array of integers
 * @n: numbers of elements to be printed
 * Return: void
 */

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);
		if (j != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
