#include "holberton.h"

/**
 * _memcpy - main func
 * @dest: char pointer var
 * @src: char pointer src
 * @n: int var
 * Return: returns char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
