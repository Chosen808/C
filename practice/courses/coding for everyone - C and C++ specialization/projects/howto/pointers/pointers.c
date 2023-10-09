/*
Pointers hold the address of data
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int increment (int *p)
{
    *p = *p + 1;

    return *p;
}


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

    printf ("*g = %d \n", *g);  // the pointer is dereferenced here. It will print the value of s

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
                printf ("p->b[] = %d \n", j[i]);    // the pointer j can be used to print the value of the array b[]

                if (i == 4)
                {
                    for (int i = 0; i < 5; i++)
                    {
                        printf ("Enter value %d \n", i);
                        scanf ("%d", &j[i]);    // the pointer can now be used to assign values to the array b[]

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

    int y = 34;
    int *d = &y;

    printf ("\nAns = %d \n", increment (d));    // the pointer int *d will be used to increment the value of y

    printf ("y = %d \n", y);    // the value of y will now be 35

    printf ("&y = %d \n", increment (&y));

    printf ("y = %d \n", y);

    printf ("sizeof *d = %d \n", sizeof (d));

    return 0;

}