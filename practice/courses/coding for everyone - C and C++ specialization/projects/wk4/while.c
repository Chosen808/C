#include <stdio.h>


main ()
{
    int i = 0, k = 0;

    printf ("Please enter enter a value ");
    scanf ("%d", &k);

    for (i = 0; i < 10; i++)
    {
        printf ("%d * %d = %d \n", i, k, i * k);
    }

    return 0;
}