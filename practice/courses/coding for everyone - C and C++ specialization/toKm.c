#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <limits.h>
#include <string.h>

main ()
{
    int m, yd;
    double km;

    puts ("Please enter how many miles: ");
    scanf ("%d", &m);

    puts ("Please enter how many yards: ");
    scanf ("%d", &yd);

    km = 1.60934 * (m + yd / 1760 );

    printf ("%lf km \n", km)


}