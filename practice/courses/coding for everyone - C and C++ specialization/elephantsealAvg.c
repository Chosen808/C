#include <stdio.h>

void print_array (int how_many, int data[], char *str)
{
    printf ("%s", str);

    for ( int i = 0; i < how_many; i++)
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

    while ( i < how_many)
    {
        c[k++] = a[i++];
    }

    while ( i < how_many)
    {
        c[k++] = b[j++];
    }
}

void fileread ( char *filename)
{
    char *str = "0";
    int value;

    value = strcmp (filename, str);

    if ( value == 0)
    {
        puts ("This file is empty!\n");
    }

    else 
    {
        FILE *popen = fopen ( filename, "r");

        if ( popen == NULL)
        {
            puts ("No such file exist\n");

            return fileread;
        }
    }
}

void mergesort ( int key[], int how_many)
{
    int j, k;

    for ( k = 1; k < how_many; k++)
    {

    }
}