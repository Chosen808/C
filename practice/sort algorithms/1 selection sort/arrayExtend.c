#include <stdio.h>
#include <stdint.h>
#include <limits.h>
#include <string.h>

main ()
{
    int size, size2, nsize, asize; 

    size = 5;
    asize = 1000;

    printf ("Please enter how many scores you are adding: ");
    scanf ("%d", &size2);

    int arr[asize];

    nsize = size + size2;

    printf ("Please add your scores: \n");


    for (int i = 0; i < size2; i++)
    {
        printf ("Enter Score ID %d: \n", i);
        scanf ("%d", &arr[i]);
    }

    for (int i = 0; i < nsize; i++)
    {
        printf ("Score ID %d: %d \n", i, arr[i]);
    }

    return 0;
}