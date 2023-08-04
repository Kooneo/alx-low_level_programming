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
	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
