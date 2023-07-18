#include "main.h"

/**
 * _islower -  checks for lowercase character
 *
 * Description: Returns 1 if c is lowercase otheewise 0
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (islower(c))
	{
		return 1;
	}

	return 0;
}
