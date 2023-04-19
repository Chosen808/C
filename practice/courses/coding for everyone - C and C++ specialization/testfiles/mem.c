#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <math.h>

main ()
{
    char charv = 'ab';

    ////////printf ("quot; address of charv = %p \n&quot;, (void *)(&amp;charv - 1) \n");

    int *p;
    int b = 100;

    p = &b;

    printf ("*p = %p, p = %p, p = %lu, *p = %d \n", p, p, p, *p);
    printf ("p = %lu \n", p + 1);

    long long a = 0;

    a = 7 * pow (16,11) + 15 * pow (16, 10) + 15 * pow (16, 9) + 15 * pow (16, 8) + 15 * pow (16, 7) + 11 * pow (16, 6) + 14 * pow (16, 5) + 1 * pow (16, 4) + 5 * pow (16, 3) + 7 * pow (16, 2) + 2 * pow (16, 1) + 12 * pow (16, 0);

    printf ("a = %lld \n", a);

    return 0;
}