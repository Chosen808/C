#include <stdint.h>
#include <stdalign.h>
#include "mergesort1.c"

enum groups
{
    black = 20,
    white = 100,
    red = 99,
    yellow = 2700,
    brown = 500
}na;

enum weekdays
{
    sun = 1,
    mon, tue, wed, thu, fri, sat
};

main ()
{
    int arr[1001] = {};
    int value = 1001;
    enum groups namerica = black;
    enum groups namerica1 = brown;
    

    printf ("nameraica = %d, namerica1 = %d, n*n1 = %d \n", namerica, namerica1, namerica1 * namerica);

    for (int i = namerica; i < yellow; i+= brown)
    {
        printf ("%d \n", i);
    }

    for ( int i = sun; i <= sat; i++)
    {
        printf ("%d \t\n", i);
    }

    fileread (arr, value);

    parray (arr, value, "My Unsorted Array");

    mergesort (arr, 0, value);

    parray (arr, value, "My Sorted Array");

    return 0;
}