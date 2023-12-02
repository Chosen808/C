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

    printf ("i = %p j = %p \n", &i, &j);

    swap (&i, &j);

    printf ("i = %d j = %d \n", i, j);
    printf ("i = %p j = %p \n", &i, &j);

    return 0;
}