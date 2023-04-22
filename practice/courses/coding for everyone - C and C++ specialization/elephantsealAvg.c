#include <stdio.h>
#include <string.h>
#include <limits.h>

void print_array (int how_many, int data[], char *str)
{
    printf ("%s", str);

    for ( int i = 0; i < how_many; i++)
    {
        printf ("%d\n", data[i]);
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

int fileread ( char *filename, int size, int data[])
{
    int j = 1, temp = 0;
    char numbers[100];
    char nums[100];
    
    FILE *popen = fopen ( filename, "r");

    if ( popen == NULL)
    {
        puts ("No such file exist\n");

    }

    while ( fscanf ( popen, "%s", nums) == 1)
    {
        size = j++;
        data[size];
        temp = atoi (nums);
        data[j] = temp;
    }

    for ( int i = 1; i < j; i++)
    {
       printf ("Data ID%d: %d\n", i, data[i]);
    }

    return data;
}

void mergesort ( int key[], int how_many)
{
    int j, k;

    int w[how_many];

    for ( k = 1; k < how_many; k++)
    {
        for ( j = 0; j < how_many - k; j += 2*k)
        {
            merge ( key + j, key + j + k, w + j, k);
        }

        for ( j = 0; j < how_many; j++)
        {
            key[j] = w[j];
        }
    }
}

int main ()
{
    int size;
    int data[0];

    fileread ("elephant_seal.txt", size, data);

    mergesort (data, size);

    print_array (size, data, "My sorted data\n");

    return 0;
}