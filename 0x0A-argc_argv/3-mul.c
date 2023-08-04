#include <stdio.h>

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
		printf("Error");
		return (1);
	}

	printf("%d\n", argv[1] * argv[2]);
	return (0);
}
