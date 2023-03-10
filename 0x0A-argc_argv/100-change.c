#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints out minimum
 * number of coins to make change for an amount of money
 * @argc: number of arguments
 * @argv: array of pointers to string arguments
 *
 * Return: always 0 for success
 */
int main(int argc, char *argv[])
{
	int count = 0, money = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	money = atoi(argv[1]);
	while (money >= 1)
	{
		if (money >= 25)
		{
			count = count + money / 25;
			money = money % 25;
		}
		else if (money >= 10)
		{
			count = count + (money / 10);
			money = money % 10;
		}
		else if (money >= 5)
		{
			count = count + (money / 5);
			money = money % 5;
		}
		else if (money >= 2)
		{
			count = count + (money / 2);
			money = (money % 2);
		}
		else
		{
			count++;
			money = 0;
		}
	}
	printf("%d\n", count);
	return (0);
}
