#include "main.h"

/**
 * _isupper - check for the uppercase character.
 *
 * Description: function that checks for uppercase character.
 * 
 * Return: Returns 1 if c is uppercase.
*/
int _isupper(int c)
{
    if ( c >= 65 && c <= 95)
    {
        return (1);
    }
    return (0);
}