#include "main.h"

/**
* swap_int - function that swaps the values of two integers.
* @a: pointer to int
* @b: pointer to int
* Return: Always void.
*/
void swap_int(int *a, int *b)
{
int a_value = *a;
int b_value = *b;
*a = b_value;
*b = a_value;
}
