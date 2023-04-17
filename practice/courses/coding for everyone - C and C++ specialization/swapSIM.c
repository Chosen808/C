#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

void swap (int a, int b)
{
    int temp;

    temp = a;
    a = b;
    b = temp;

    printf ("a = %d and b = %d \n", a, b);
}

main ()
{
    int c = 10, d = 20;

    swap (c, d);

    return 0;
}