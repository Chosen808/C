#include <stdio.h>
#include <stdlib.h>

main ()
{
    char h[10][5];

    char *p = &h; // this is a pointer to the array h[][]
    char *q = p + sizeof (h); // this will store the end address of the array h[][]

    printf ("Size of h[][] = %d \n", sizeof (h)); // this is the size of the array h[][]
    printf ("*p = &h = %p \n", p); // this is the pointer that will check the starting location of the array h[][]
    printf ("*p + sizeof (h) = %p \n", p + sizeof (h)); // this will add the size of the array h to the pointer *p and will print the end address of the array h[][]
    printf ("*q = %p \n", q); // this will print the end address of the array h[][]

}