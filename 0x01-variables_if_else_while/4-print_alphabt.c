#include <stdio.h>

/**
 * main - print the letters of the alphabe
 *
 * Description: print the letters of the alphabet except e, q
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 97;

	while (i < 123)
	{
		if (i != 113 && i != 101)
		{
			putchar(i);
		}
		i++;
	}

	putchar(10);

	return (0);
}
