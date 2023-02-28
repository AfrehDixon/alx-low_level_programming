#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts string to integer
 * @s: the pointer to convert
 * Return: returns integer
 */

int _atoi(char *s)
{
	int c = 0;
	unsigned int a = 0;
	int k = 1;
	int j = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			k *= -1;
		}
		while (s[c] >= 48 && s[c] <= 57)
		{
			j = 1;
			a = (a * 10) + (s[c] - '0');
				c++;
		}


		if (j == 1)
		{
			break;
		}
		c++;
	}
	a *= k;
	return (a);
}

