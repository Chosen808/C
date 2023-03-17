#include <stdio.h>
#include <stdint.h>
#include <limits.h>
#include <string.h>
#include <stdlib.h>

main ()
{
    int a;
    int *b = &a;
    *b = 5;

    int arr[100];

    int *c = &arr;

    c[1] = 24;
    c[1] = 88;

    printf ("*b: %d \n", *b);
    printf ("a: %d \n", a);
    printf ("a(address): %p \n", &a);
    printf ("*b(address): %p \n", b);

    printf ("arr[1]: %d \n\n", arr[1]);

    for (int i = 0; i < 6; i++)
    {
        printf ("arr ID%d: %d \n", i, arr[i]);
    }

    c[5] = 888;

    printf("\n\n");

    for (int i = 0; i < 6; i++)
    {
        printf ("arr ID%d: %d \n", i, arr[i]);
    }

    printf ("\n\n");

    for (int i = 0; i < 6; i++)
    {
        printf ("*c ID%d: %d \n", i, c[i]);
    }

    

    //free(b);
    
    return 0;

}