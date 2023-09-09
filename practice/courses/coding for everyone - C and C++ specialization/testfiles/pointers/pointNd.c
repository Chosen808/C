#include <stdio.h>


main ()
{
    int l = 9, c, v;

    long int *r = &l;

    printf ("Please enter a number: ");
    scanf ("%d", &r);

    printf ("SIZE = %ld \n", sizeof (r));

    printf ("%d \n", r);

    int *y = &l;

    printf ("y = %d \n", *y);

    *y = 50;

    printf ("y = %d \n", *y);
    printf ("l = %d \n", l);

    l = 70;

    printf ("l = %d \n", l);
    printf ("y = %d \n", *y);

    return 0;
}