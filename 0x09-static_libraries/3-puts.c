#include "holberton.h"

/**
 * _puts - main function
 *
 * @str: pointer of char
 *
 * Return: nothing
 *
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
