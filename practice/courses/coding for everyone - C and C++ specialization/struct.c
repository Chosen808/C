#include <stdio.h>
#include <stdlib.h>

main ()
{
    struct point
    {
        double x;
        double y;
        double z;
    } p1 = {2.5, 4.98, 8.5};

    printf ("%lf \n", p1.z);

    return 0;
}