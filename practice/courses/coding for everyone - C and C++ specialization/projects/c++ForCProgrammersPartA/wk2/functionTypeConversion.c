#include <stdio.h>

int function (int l, int k)
{
    return l + k;
}


main ()
{
    char o = 'k';
    float j = 3.5;

    printf ("%d \n", function (o, j));

    return 0;
}