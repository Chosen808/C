#include <stdio.h>
#include <stdlib.h>


main ()
{
    int m = 10, n, o;
    int *z;

    z = &m;

    printf ("Z addr of m = %p \n", z);    // z stores the address of m
    printf ("Z  val of m = %d m \n", *z);  // *z stores the value of m
    printf ("M addr = %p \n", &m);    // &m is the address of m 
    printf ("N addr = %p \n", &n);    // &n stores sthe address of n
    printf ("O addr = %p \n", &o);    // &o stores the address of o
    printf ("Z addr = %p \n", &z);    // &z stores the address of z

    return 0;
}