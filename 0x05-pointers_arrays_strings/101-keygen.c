#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates keygen.
 * Return: 0 Always.
 */
int main(void)
{
    int r = 0, c = 0;
    time_t t;

    srand((unsigned int)time(&t));
    while (c < 2772)
    {
        r = rand() % 128;
        if ((c + r) > 2772)
            break;
        c = c + r;
        printf("%c", (char)r); // Cast 'r' to char to print it as a character.
    }
    printf("%c\n", (char)(2772 - c)); // Cast to char to print the remaining value as a character.
    return 0;
}
