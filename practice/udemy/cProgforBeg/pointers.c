#include <stdio.h>


main ()
{
    int a = 55;
    int *b;
    b = &a;

    printf ("a = %d \n", a);
    printf ("b->a = %p \n", b);

    return 0;
}