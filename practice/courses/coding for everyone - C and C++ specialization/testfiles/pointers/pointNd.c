#include <stdio.h>


main ()
{
    int l = 9, c, v;

    long int *r = &l;

    printf ("Please enter a number: ");
    scanf ("%d", &r);

    printf ("SIZE = %ld \n", sizeof (r));

    printf ("%d \n", r);

    return 0;
}