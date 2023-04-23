#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void print_array (long data[], long how_many, char *str)
{
    printf ("%s\n", str);

    for (int i = 0; i < how_many; i++)
    {
        printf ("Data ID%d: %ld\n", i, data[i]);
    }
}

void merge (long a[], long b[], long c[], long how_many)
{
    long i = 0, j = 0, k = 0;

    while ( i < how_many && j < how_many)
    {
        if ( a[i] < b[j])
        {
            c[k++] = a[i++];
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

    while (j < how_many)
    {
        c[k++] = b[j++];
    }
}

void mergesort ( long key[], long how_many)
{
    long j, k;
    long w[how_many];

    for ( k = 1; k < how_many; k *= 2)
    {
        for ( j = 0; j < how_many - k; j += 2 * k)
        {
            merge ( key + j, key + j + k, w + j, k);
        }

        for ( j = 0; j < how_many; j++)
        {
            key[j] = w[j];
        }
    }
}

main ()
{
    const long size = 1001;
    int *d;

    char numbers[1001];
    int temp = 0, i = 0;
    int *ttemp = 0;

    FILE *open = fopen ("elephant_seal.txt", "r");

    if ( open == NULL)
    {
        puts ("No such file exist\n");
    }

    while ( fscanf ( open, "%s", numbers) == 1)
    {
        i++;
        temp = atoi (numbers);

        ttemp = &temp;

        d[i] = ttemp;
    }

    for ( int i = 0; i < size; i++)
    {
        printf ("info %ld\n", d[i]);
    }

    print_array (d, size, "My data\n");

    return 0;
}