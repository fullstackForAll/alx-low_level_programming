#include "holberton.h"

/**
 * _strcmp - main function
 * @s1: pointer of char
 * @s2: pointer of char
 * Return: returns int
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while ((s1[i] != 0) && (s2[i] != 0) && (s1[i] == s2[i]))
		i++;
	return (s1[i] - s2[i]);
}
