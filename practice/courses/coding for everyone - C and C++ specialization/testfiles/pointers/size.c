#include <stdio.h>

main ()
{
    long long m = 100;

    int *s;

    s = &m;

    printf ("An int uses %zu bytes of memory \n", sizeof (unsigned long long));

    printf ("An = %d \n", m);
    printf ("M a = %p \n", s);
    printf ("S a = %p \n", &s);
    printf ("M s -> m = %p \n", &m);
    printf ("And its address is %p \n", &m);


    return 0;
}