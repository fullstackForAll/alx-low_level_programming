#include "holberton.h"

/**
 * *_strcpy - main function
 *
 * @dest: pointer of function
 *
 * @src: ointer of function
 *
 * Return: returnes char
 *
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
