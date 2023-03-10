#include "holberton.h"

/**
 * _strncat - mai function
 * @dest: pointer of a char
 * @src: pointer of a char
 * @n: intiger
 * Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != 0)
		i++;
	while ((src[j] != 0) && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
