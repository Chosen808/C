#include <stdio.h>


main ()
{
    int sum, i;

    for (sum = 0, i = 1; i <= 50; i++)
    {
        sum += i;

        printf (" ID: %d, sum = %d \n", i, sum);
    }

    int a, b, c, d;

    a = (b = 7, c + d);

    printf ("a = %d, b = %d, c = %d, d = %d,  \n", a, b, c, d);

    return 0;
}