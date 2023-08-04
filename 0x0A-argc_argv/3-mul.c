#include <stdio.h>
#include <stdlib.h>

/**
* main - multiplies two numbers.
* @argc: int
* @argv: list
* Return: 0, 1
*/
int main(int argc, char *argv[])
{
	int total;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		total = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", total);
	}
	return (0);
}
