#include "main.h"

/**
 * _islower -  checks for lowercase character
 * @c: first parameter
 * Description: Returns 1 if c is lowercase otheewise 0
 *
 * Return: 1 or 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
}
