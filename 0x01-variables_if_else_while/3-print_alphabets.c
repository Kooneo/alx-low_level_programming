#include <stdio.h>

/**
 * main - print the letters of the alphabe
 *
 * Description: print the letters of the aphabet in lower then in uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++
	}
	return (0);
}
