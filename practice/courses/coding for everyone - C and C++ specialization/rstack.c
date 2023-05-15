#include <stdio.h>
#include <stdint.h>

struct point
{
    double x;
    double y;
} p1 = {4, p1.x}; 

main ()
{
    struct point *ptr = &p1;

    printf ("%lf \n", ptr -> y);

    return 0;
}