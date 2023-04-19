#include <stdio.h>
#include <stdint.h>
#include <limits.h>
#include <string.h>

main ()
{
    int size, asize;
    asize = 1000;

    printf ("Please enter how many scores you have: ");
    scanf ("%d", &size);

    int arr[asize];

    printf ("\nPlease enter your scores: \n\n");

    for (int i = 0; i < size; i++)
    {
        printf ("Enter Score ID%d: \n", i);
        scanf ("%d", &arr[i]);
    }

    printf ("\nThese are your entered scores: \n\n");

    for (int i = 0; i < size; i++)
    {
        printf ("Score ID%d: %d \n", i, arr[i]);
    }
//////////////////////////////////////////////////////////////
    int nsize, size2;

    printf ("Please enter how many scores you want to add: ");
    scanf ("%d", &size2);

    nsize = size + size2;

    int barr[nsize];

    for (int i = 0; i < size; i++)
    {
        barr[i] = arr[i];
    }

    printf ("\n\nPlease enter your added scores: \n\n");

    for (int i = size; i < nsize; i++)
    {
        printf ("Enter Score ID%d: \n", i);
        scanf ("%d", &barr[i]);
    }

    printf ("\nThese are your entered scores: \n\n");

    for (int i = 0; i < nsize; i++)
    {
        printf ("Score ID%d: %d \n", i, barr[i]);
    }

    for (int i = 0; i < nsize; i++)
    {
        arr[i] = barr[i];
    }

     printf ("\nThese are your entered scores: \n\n");

    for (int i = 0; i < nsize; i++)
    {
        printf ("ARR: Score ID%d: %d \n", i, arr[i]);
    }


    return 0;

    

}