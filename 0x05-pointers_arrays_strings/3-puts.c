#include "main.h"

/**
 * _puts - returns the length of a string.
 * @str: input string.
 * Return: length of a string.
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
