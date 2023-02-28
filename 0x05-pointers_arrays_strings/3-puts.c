#include <stdio.h>

/**
 * _puts - prints a string
 * @str: The string to print
 * Return: return 0
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
	putchar(*str);
	}
	putchar('\n');
}
