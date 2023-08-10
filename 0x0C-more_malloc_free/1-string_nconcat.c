#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat_new - concatenates two strings.
 * @str1: first string.
 * @str2: second string.
 * @num_bytes: amount of bytes.
 *
 * Return: pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */
char * string_nconcat(char * str1, char * str2, unsigned int num_bytes) {
    char * result;
    unsigned int len_str1, len_str2, len_result, i;

    if (str1 == NULL)
        str1 = "";

    if (str2 == NULL)
        str2 = "";

    for (len_str1 = 0; str1[len_str1] != '\0'; len_str1++)
    ;

    for (len_str2 = 0; str2[len_str2] != '\0'; len_str2++)
    ;

    if (num_bytes > len_str2)
        num_bytes = len_str2;

    len_result = len_str1 + num_bytes;

    result = malloc(len_result + 1);

    if (result == NULL)
        return (NULL);

    for (i = 0; i < len_result; i++)
        if (i < len_str1)
            result[i] = str1[i];
        else
            result[i] = str2[i - len_str1];

    result[i] = '\0';

    return (result);
}
