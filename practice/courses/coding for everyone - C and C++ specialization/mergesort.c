#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

void print_array (int how_many, int data[], char *str)
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

main (void)
{
    const int size = 5;
    int a[] = {67, 82, 83, 88, 99};
    int b[] = {58, 69, 72, 81, 88};
    int c[2 * size];

    print_array (size, a, "My grades\n");
    puts ("\n\n");

    print_array (size, b, "More grades\n");
    puts("\n\n");

    merge (a, b, c, size);

    print_array ( 2 * size, c, "My sorted grades\n");
    puts ("\n\n");

    return 0;
}