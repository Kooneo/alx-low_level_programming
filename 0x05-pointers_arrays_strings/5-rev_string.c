#include "main.h"

/**
* rev_string - reverses a string.
* @s: input string.
* Return: string, in reverse,
*/
void rev_string(char *s)
{
	int count = 0, i, n;
	char *str, temp;

	while (count >= 0)
	{
		if (s[count] == '\0')
			break;
		count++;
	}
	str = s;

	for (i = 0; i < (count - 1); i++)
	{
		for (n = i + 1; n > 0; n--)
		{
			temp = *(str + n);
			*(str + n) = *(str + (n - 1));
			*(str + (n - 1)) = temp;
		}
	}
}