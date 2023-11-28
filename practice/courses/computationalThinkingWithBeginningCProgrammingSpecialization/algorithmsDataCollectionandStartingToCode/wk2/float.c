#include <stdio.h>
#include <stdlib.h>


main ()
{
    int hoursDriven = 5;
    int milesDriven = 262;

    float mph = (float) milesDriven / hoursDriven;

    printf ("MPH = %.1f \n", mph);

    return 0;
}