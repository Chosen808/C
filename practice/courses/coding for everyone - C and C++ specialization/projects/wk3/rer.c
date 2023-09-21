#include <stdio.h>
#include <stdlib.h>

main ()
{
    int p = 10, o = 100;
    int *i = &p;
    int *k = &o;

    int temp = 0;

    int *head = NULL;

    while (i > head)
    {
        *i =+ 1;

        temp =+ *i;

        printf ("%d \n", temp);

    }

   // printf ("%d \n", *i);

/*
    for (i = 0; i < 10; i++)
    {
        printf ("%d \n", i);
    }*/

    return 0;
}