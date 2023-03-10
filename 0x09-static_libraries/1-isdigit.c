#include "holberton.h"
#include <stdio.h>
/**
 * _isdigit - starting function
 *
 * @c: intiger of a function
 *
 * Return: return value
 *
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
