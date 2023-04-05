#include <stdio.h>
#include <stdint.h>
#include <math.h> /* has sin(), abs(), and fabs()*/

main (void)
{
    double interval;
    int i;

    for ( i = 0; i < 30; i++)
    {
        printf ("i = %d \n", i);
        interval = i / 10.0;

        printf ("sin (%lf) = %f \n", interval, abs (sin (interval)));
    }

    printf ("\n+++++++\n");

    return 0;
}