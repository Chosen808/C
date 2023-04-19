#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>


main ()
{
    ///THIS CODE TAKES THE VALUES FROM A VALUE AND COPIES THEM TO ANOTHER VARIABLE WHICH HAS
    ///A LARGE SIZE ALLOWING YOU TO ENTEND THE VALUE IN THAT VALUE FOR WHATEVER PROCESSING 
    ///YOU ARE REQUIRED TO PERFORM ON THE VALUES IN THE VARIABLE

    int nsize, size, size2, asize;

    size = 5;
    asize = 1000;

    printf ("Please enter the amount of scores you want to add: ");
    scanf ("%d", &size2);

    nsize = size + size2;

    int arr[asize];
    int barr[nsize];
    //int carr[100];

    for (int i = 0; i < size; i++)
    {
        barr[i] = arr[i];
    }

    printf ("Please add your scores: \n");

    for (int i = size; i < nsize; i++)
    {
        printf ("Enter Score ID %d: \n", i);
        scanf ("%d", &barr[i]);
    }
/*
    for (int i = size; i < size2; i++)
    {
        arr[i] = barr[i];
    }
*/
    for (int i = 0; i < nsize; i++)
    {
        printf ("barr ID%d: %d \n", i, barr[i]);
        //printf ("arr ID%d: %d \n", i, arr[i]);
    }

    return 0;

}