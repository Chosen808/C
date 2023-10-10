#include <stdio.h>


main ()
{
    int m = 300;
    float fx = 300.600006;
    char cht = 'z';

    int *x = &m;
    float *y = &fx;
    char *z = &cht;

    printf ("&m = %p \n", &m);  // address of m
    printf ("&fx = %p \n", &fx);    // address of fx
    printf ("&cht = %p \n", &cht);  // address of cht

    printf ("*x = %d \n", *x);  // value at m
    printf ("*y = %f \n", *y);    // value at fx
    printf ("*cht = %c \n", *z);    // value at cht



    return 0;
}