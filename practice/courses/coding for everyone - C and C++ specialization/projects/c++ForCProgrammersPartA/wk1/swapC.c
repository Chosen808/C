#include <stdio.h>

void swap (int *i, int *j)
{
    int temp = *i;
    *i = *j;
    *j = temp;
}


main ()
{
    int i = 1000;
    int j = 2343;

    swap (&i, &j);

    printf ("i = %d j = %d \n", i, j);

    return 0;
}