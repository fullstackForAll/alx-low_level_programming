#include "holberton.h"
/**
 * _isupper - chakes if uppercase
 *
 * @c: intiger of function
 *
 * Return: return value
 *
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
