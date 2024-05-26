#include <stdio.h>

long double fibList (int n)
{
    int i, j;
    long double F[n];
    F[0] = 0;
    F[1] = 1;

    for (i = 2, j = 0; i < n; i++, j++)
    {
        F[i] = F[i - 1] + F[i - 2];
    }

    return F[n -1];
}

main ()
{
    int n;

    printf ("How many numbers? \n");
    scanf ("%d", &n);

    printf ("%.0Lf \n", fibList (n));

    long double F[n];
    F[0] = 0;
    F[1] = 1;

    for (int i = 2, j = 0; i < n, j < n; i++, j++)
    {
        F[i] = F[i - 1] + F[i - 2];

        printf ("F[%d] = %.0Lf \n", j, F[j]);
    }

    return 0;
}