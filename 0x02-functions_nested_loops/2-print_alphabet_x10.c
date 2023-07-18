#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet
 *
 * Description: prints 10 times the alphabet, lowercase
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
