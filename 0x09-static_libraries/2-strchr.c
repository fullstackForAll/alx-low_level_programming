#include "holberton.h"

/**
 * _strchr - main func
 * @s: char pointer var
 * @c: char var
 * Return: returns char
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
		s++;
	}
	return (s + 1);
}
