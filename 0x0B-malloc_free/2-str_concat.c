#include "main.h"
#include <stdlib.h>

/**
 * concat_strings - Concatenates two strings.
 * @s1: First string.
 * @s2: Second string.
 *
 * Return: Pointer to the concatenated string, or NULL on failure.
 */
char *concat_strings(char *s1, char *s2)
{
    char *concatenated;
    unsigned int len1, len2, i, j, k;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    len1 = 0;
    while (s1[len1] != '\0')
        len1++;

    len2 = 0;
    while (s2[len2] != '\0')
        len2++;

    concatenated = malloc(sizeof(char) * (len1 + len2 + 1));

    if (concatenated == NULL)
    {
        free(concatenated);
        return (NULL);
    }

    i = 0;
    while (i < len1)
    {
        concatenated[i] = s1[i];
        i++;
    }

    j = 0;
    while (j <= len2)
    {
	concatenated[i + j] = s2[j];
        j++;
    }

	return (concatenated);
}

