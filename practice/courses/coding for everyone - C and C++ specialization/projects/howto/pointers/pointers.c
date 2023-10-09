/*
Pointers hold the address of data
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

main ()
{
    char h[10][5];

    char *p = &h; // this is a pointer to the array h[][]
    char *q = p + sizeof (h); // this will store the end address of the array h[][]

    printf ("Size of h[][] = %d \n", sizeof (h)); // this is the size of the array h[][]
    printf ("*p = &h = %p \n", p); // this is the pointer that will check the starting location of the array h[][]
    printf ("*p + sizeof (h) = %p \n", p + sizeof (h)); // this will add the size of the array h to the pointer *p and will print the end address of the array h[][]
    printf ("*q = %p \n", q); // this will print the end address of the array h[][]

    printf ("h = %p \n", &h); // this is the address of h. it can be found by adding the & to it
    printf ("*p->h = %p \n", p); // this is a pointer to h. The pointer address was stored in char *p through char *p = &h;

    char *o = q;

    printf ("o->q = %p \n", o);

    int s = 76;
    int *g = &s;

    printf ("*g = %d \n", *g);

    int b[5];
    int *j = &b;

    printf ("Please enter values: \n");
    
    for (int i = 0; i < 5; i++)
    {
        printf ("Enter value %d \n", i);
        scanf ("%d", &b[i]);

        if (i == 4)
        {
            for (int i = 0; i < 5; i++)
            {
                printf ("p->b[] = %d \n", j[i]);

                if (i == 4)
                {
                    for (int i = 0; i < 5; i++)
                    {
                        printf ("Enter value %d \n", i);
                        scanf ("%d", &j[i]);

                        if (i == 4)
                        {
                            for (int i = 0; i < 5; i++)
                            {
                                printf ("b[] = %d \n", b[i]);
                            }
                        }
                    }
                }
            }
        }
    }

}