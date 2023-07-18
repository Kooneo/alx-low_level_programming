#include "main.h"

/**
 * print_alphabet - prints the alphabet
 *
 * Description: prints the alphabet in lowercase, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	for(int i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
