#include <stdio.h>
#include <stdlib.h>


int *guess ()
{
    int x = 7;

    return &x;
}


main ()
{
    int *em = guess ();

    printf ("%d \n", *em);

    return 0;
}