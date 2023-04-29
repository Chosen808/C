#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_array ( int how_many, int data[], char *str)
{
    printf ("%s", str);

    for (int i = 0; i < how_many; i++)
    {
        printf ("%d\t", data[i]);
    }
}

void merge ( int a[], int b[], int c[], int how_many)
{
    int i = 0, j = 0, k = 0;

    while ( i < how_many && j < how_many)
    {
        //printf ("a = %ld, b = %ld\n", a, b);

        if (a[i] < b[j])
        {
            //printf ("\nc = %ld, a = %ld\n\n", c, a);
            c[k++] = a[i++];
            //printf ("\n2c = %ld, 2a = %ld\n\n", c, a);
        }

        else 
        {
            c[k++] = b[j++];
        }
    }

    while (i < how_many)
    {
        c[k++] = a[i++];
    }

    while ( j < how_many)
    {
        c[k++] = b[j++];
    }
}


void mergesort ( int key[], int how_many) // a power of 2
{
    int j, k;
    int w[how_many];

    for ( k = 1; k < how_many; k *= 2)
    {
        printf ("k1 = %d \n\n", k);

        for ( j = 0; j < how_many - k; j += 2*k)
        {
            printf ("k2 = %d \n\n", k);

            merge (key +j, key + j + k, w + j, k);

            printf ("key = %d, w = %d ID%d\n\n", key[j], w[j], j);
        }

        for ( j = 0; j < how_many; j++)
        {
            key[j] = w[j];

            printf ("2key = %d, 2w = %d ID%d\n\n", key[j], w[j], j);
        }
    }
}

main (void)
{
    const int size = 12;
    int a[] = {99, 82, 74, 85, 92, 67, 76, 49, 23, 96, 43, 12};

    print_array (size, a, "My grades\n");
    printf ("\n\n");

    mergesort ( a, size);

    print_array (size, a, "My sorted grades\n");
    printf ("\n\n");

    return 0;
}