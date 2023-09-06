#include <stdio.h>
#include <stdlib.h>

main ()
{
    double x = 0.123456789;

    printf ("general Printing Ideas \n\n");
    printf ("x is %-12.5e and %e and %10.5f and %10d \n\n", x, x, x, (double) x);

    int *p;
    int n = 10;

    /*p = (int *) malloc (sizeof (100));

    if (p == NULL)
    {
        printf ("Memory not allocated \n");
    }

    else
    {
        printf ("Memory allocated sucessfuly \n");
    }*/

    printf ("P = %ld \n", sizeof (p));

    int a = (int *) calloc (n, sizeof (long long));

    printf ("%ld \n", sizeof (a));



    return 0;
}