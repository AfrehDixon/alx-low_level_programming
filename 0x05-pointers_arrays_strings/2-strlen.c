#include <stdio.h>

/**
 * _strlen - function that prints the length of a string
 * @str: the string to get the lenght of
 * Return: returns the lrnght of @str
 */

size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
	length++;
	return (length);
}

