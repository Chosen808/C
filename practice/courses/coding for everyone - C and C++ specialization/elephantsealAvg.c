#include <stdio.h>
#include <string.h>
#include <limits.h>

void print_array (long how_many, int data[], char *str)
{
    printf ("%s", str);

    for ( int i = 0; i < how_many; i++)
    {
        printf ("%d\n", data[i]);
    }
}

void merge ( int a[], int b[], int c[], long how_many)
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

    while ( j < how_many)
    {
        c[k++] = b[j++];
    }
}

void fileread ( char *filename, int size, int data[])
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
        //data[size];
        temp = atoi (nums);
        data[j] = temp;
    }

    for ( int i = 1; i < j; i++)
    {
       printf ("Data ID%d: %d\n", i, data[i]);
    }
}

void mergesort ( int key[], long how_many)
{
    int j, k;
    int w[how_many];

    for ( k = 1; k < how_many; k *= 2)
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
    const int size = 1001;
    int j = 0, temp = 0;
    int d[] = {};
    char numbers[100];

    //fileread ("elephant_seal.txt", size, d);

    FILE *open = fopen ("elephant_seal.txt", "r");

    if ( open == NULL)
    {
        puts ("No such file exist\n");
    }

    printf ("j = %d\n", j);

    while ( fscanf ( open, "%s", numbers) == 1)
    {
        j++;

        temp = atoi (numbers);

        d[j] = temp;
    }

    for ( int i = 1; i < size; i++)
    {
        printf ("Data ID%d: %d\n", i, d[i]);
    }

    mergesort (d, size);

    for ( int i = 0; i < size; i++)
    {
        printf ("D ID%d = %d\n", i, d[i]);
    }

    print_array (size, d, "My sorted data\n");

    return 0;
}