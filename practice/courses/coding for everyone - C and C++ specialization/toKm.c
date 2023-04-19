#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <limits.h>
#include <string.h>

main ()
{
    double m, yd;
    double km;

    puts ("Please enter how many miles: ");
    scanf ("%lf", &m);

    puts ("Please enter how many yards: ");
    scanf ("%lf", &yd);

    km = 1.60934 * (m + yd / 1760.0);

    printf ("%lf km \n", km);

    return 0;
}