#include <stdio.h>
#include <stdlib.h>

/**
* main - that adds positive numbers.
* @argc: int
* @argv: list
* Return: 0, 1
*/
int main(int argc, char *argv[])
{
	int total = 0;
	char *c;

	while (--argc)
	{
		for (c = argv[argc]; *c; c++)
		{
			if (*c < '0' || *c > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		total += atoi(argv[argc]);
	}
	printf("%d\n", total);
}
