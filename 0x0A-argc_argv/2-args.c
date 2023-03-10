#include <stdio.h>

/**
 * main - main function
 * @argc: num of arg
 * @argv: value of arg
 * Return: int
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
