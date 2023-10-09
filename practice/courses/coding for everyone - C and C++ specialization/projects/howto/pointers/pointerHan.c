#include <stdio.h>


main ()
{
    //int i = 29;
    int *m = 29;
    int *ab = &m;

    printf ("&m = %p \n", &m);  // address of m
    printf ("m = %d \n", m);   // value of m

    printf ("ab->m = %p \n", ab);   // address of pointer ab
    printf ("*ab = %d \n", *ab);    // content of pointer ab

    m = 34;

    printf ("ab->m %p \n", ab); // address of pointer ab
    printf ("*ab = %d \n", *ab);    // content of pointer ab

    m = 7;

    printf ("&m %p \n", &m);  // address of m
    printf ("m = %d \n", m);  // value of m

}