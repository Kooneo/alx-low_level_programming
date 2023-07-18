#include "main.h"

/**
 * print_alphabet - prints the alphabet
 *
 * Description: prints the alphabet in lowercase, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{

	int j;
	
	for (j = 0; j < 10; j++)
	{
		int i;
		for (i = 'a'; i < '{'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}	
