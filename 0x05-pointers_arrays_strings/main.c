#include <stdio.h>
#include "main.h"
#include "4-print_rev.c"


int main(void)
{
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    print_rev(str);
    return (0);
}