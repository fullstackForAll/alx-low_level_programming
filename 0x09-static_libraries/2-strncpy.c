#include "holberton.h"

/**
 * _strncpy - main function
 * @dest: pointer of char
 * @src: poiter of char
 * @n: intiger of function
 * Return: returns char
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while ((src[i] != 0) && (i < n))
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}
