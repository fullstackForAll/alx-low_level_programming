#include "holberton.h"

/**
 * _strlen - main function
 *
 * @s: pointer of a char
 *
 * Return: return value of function
 *
 */

int _strlen(char *s)
{
	int c = 0;

	while (*s)
	{
		c++;
		s++;
	}
	return (c);
}
